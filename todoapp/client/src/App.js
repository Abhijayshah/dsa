import React, { useEffect, useState } from 'react';
import api from './services/api';
import './App.css';

function App() {
  const [todos, setTodos] = useState([]);
  const [text, setText] = useState('');

  useEffect(() => {
    fetchTodos();
  }, []);

  const fetchTodos = async () => {
    const res = await api.get('/todos');
    setTodos(res.data);
  };

  const addTodo = async (e) => {
    e.preventDefault();
    if (!text.trim()) return;
    const res = await api.post('/todos', { text });
    setTodos(prev => [res.data, ...prev]);
    setText('');
  };

  const toggle = async (todo) => {
    const res = await api.put(`/todos/${todo._id}`, { completed: !todo.completed });
    setTodos(prev => prev.map(t => t._id === res.data._id ? res.data : t));
  };

  const remove = async (id) => {
    await api.delete(`/todos/${id}`);
    setTodos(prev => prev.filter(t => t._id !== id));
  };

  return (
    <div className="app">
      <h1>Todo</h1>
      <form onSubmit={addTodo} className="form">
        <input value={text} onChange={e => setText(e.target.value)} placeholder="Add todo" />
        <button type="submit">Add</button>
      </form>
      <ul className="todos">
        {todos.map(t => (
          <li key={t._id} className={t.completed ? 'done' : ''}>
            <span onClick={() => toggle(t)}>{t.text}</span>
            <button onClick={() => remove(t._id)}>Delete</button>
          </li>
        ))}
      </ul>
    </div>
  );
}

export default App;
