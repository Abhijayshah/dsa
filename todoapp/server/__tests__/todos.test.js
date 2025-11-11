const request = require('supertest');
const mongoose = require('mongoose');
const { MongoMemoryServer } = require('mongodb-memory-server');
const app = require('../app');
const Todo = require('../models/Todo');

let mongoServer;

beforeAll(async () => {
  mongoServer = await MongoMemoryServer.create();
  const uri = mongoServer.getUri('tododb_test');
  await mongoose.connect(uri, {});
}, 30000);

afterAll(async () => {
  if (mongoose.connection.readyState) {
    await mongoose.connection.close();
  }
  if (mongoServer) {
    await mongoServer.stop();
  }
});

beforeEach(async () => {
  await Todo.deleteMany({});
});

describe('Todos API', () => {
  it('creates and lists todos', async () => {
    const createRes = await request(app).post('/api/todos').send({ text: 'First' });
    expect(createRes.status).toBe(201);
    const listRes = await request(app).get('/api/todos');
    expect(listRes.status).toBe(200);
    expect(listRes.body.length).toBe(1);
    expect(listRes.body[0].text).toBe('First');
  });

  it('updates a todo', async () => {
    const createRes = await request(app).post('/api/todos').send({ text: 'ToUpdate' });
    const id = createRes.body._id;
    const updateRes = await request(app).put(`/api/todos/${id}`).send({ completed: true });
    expect(updateRes.status).toBe(200);
    expect(updateRes.body.completed).toBe(true);
  });

  it('deletes a todo', async () => {
    const createRes = await request(app).post('/api/todos').send({ text: 'ToDelete' });
    const id = createRes.body._id;
    const delRes = await request(app).delete(`/api/todos/${id}`);
    expect(delRes.status).toBe(200);
    const listRes = await request(app).get('/api/todos');
    expect(listRes.body.length).toBe(0);
  });
});
