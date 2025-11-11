# MERN Todo App (Deployment Ready)

Minimal MERN (MongoDB, Express, React, Node) Todo app, production-ready with Docker and docker-compose.

## Features
- Express REST API for todos (CRUD)
- Mongoose model and MongoDB service
- React client with a simple Todo UI
- Dockerfiles for server and client
- docker-compose to orchestrate MongoDB + API + nginx (serving static client)
 - Jest + Supertest backend tests (mongodb-memory-server) & React Testing Library frontend test
 - GitHub Actions CI (tests + Docker build)

## Prereqs
- Docker Desktop (or Docker Engine) and Docker Compose v2

## Quick start (with Docker)
1) Copy backend env file

```sh
cp server/.env.example server/.env
```

2) Build and run all services

```sh
docker compose up --build
```

3) Open the app in your browser

```sh
open http://localhost:3000
```

API is available at `http://localhost:5000/api` (also proxied from the client via `/api`). Health check: `http://localhost:5000/api/health`.

To stop:

```sh
docker compose down
```

## Local development (without Docker)

Run MongoDB yourself (e.g., brew services) or a quick container:

```sh
docker run --rm -p 27017:27017 --name mongo mongo:6.0
```

Backend:

```sh
cd server
cp .env.example .env
npm install
npm run dev
```

Frontend:

```sh
cd client
npm install
npm start
```

By default the client uses relative `/api` in production (nginx). For dev, you can set `client/.env` with `REACT_APP_API_URL=http://localhost:5000/api`.

## Environment variables
- Server (`server/.env`)
  - `MONGO_URI` (e.g., `mongodb://localhost:27017/tododb` or `mongodb://mongo:27017/tododb` in Docker)
  - `PORT` (default `5000`)
- Client (`client/.env`)
  - `REACT_APP_API_URL` (optional; defaults to `/api`)

## Monitoring & Observability (Foundations)
- Basic health endpoint: `GET /api/health` returns uptime and ok flag.
- Logs: view server container logs
  ```sh
  docker compose logs -f server
  ```
- Future enhancements (not implemented yet):
  - Structured logging (pino/winston)
  - Metrics (Prometheus + /metrics endpoint)
  - Tracing (OpenTelemetry)
  - Error tracking (Sentry)

## Structure
- `server/` - backend API (Express + Mongoose)
- `client/` - React front-end (built and served by nginx in production)
- `docker-compose.yml` - local deployment orchestration

See `server/README.md` and `client/README.md` for more details.
