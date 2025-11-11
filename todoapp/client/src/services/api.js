import axios from 'axios';

// Default to relative "/api" so nginx proxy in Docker works out of the box.
// Allow override via REACT_APP_API_URL for dev or separate deployments.
const base = process.env.REACT_APP_API_URL || '/api';

const instance = axios.create({
  baseURL: base
});

export default instance;
