# Server (Express + Mongoose)

## Setup

```sh
cp .env.example .env
npm install
npm run dev
```

## Tests

Uses Jest + Supertest with `mongodb-memory-server`:

```sh
npm test
```

## Docker

Built and run via repository root:

```sh
docker compose up --build
```

## Environment

| Variable   | Description                                      | Default |
|------------|--------------------------------------------------|---------|
| MONGO_URI  | MongoDB connection string                        | mongodb://localhost:27017/tododb |
| PORT       | Port server listens on                           | 5000    |

Health check endpoint: `GET /api/health`
