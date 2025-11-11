# Client (React)

Setup

1. Install dependencies:
   npm install
2. Run locally (dev):
   npm start

Build

npm run build

When using Docker, the client image builds the app and serves it with nginx.

Environment
- REACT_APP_API_URL - URL to backend API (defaults to http://localhost:5000/api)
 
 Testing
 
 ```sh
 npm test
 ```
