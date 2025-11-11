const express = require('express');
const cors = require('cors');
const todosRouter = require('./routes/todos');

const app = express();

app.use(cors());
app.use(express.json());

// Routes
app.use('/api/todos', todosRouter);
app.get('/api/health', (req, res) => {
  res.json({ ok: true, uptime: process.uptime() });
});

module.exports = app;
