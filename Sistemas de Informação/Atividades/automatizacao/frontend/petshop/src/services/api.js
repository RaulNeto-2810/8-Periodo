import axios from 'axios';

const API_URL = 'http://localhost:8000/api';

const api = axios.create({
  baseURL: API_URL,
  headers: {
    'Content-Type': 'application/json',
  },
});

// Produtos
export const getProdutos = () => api.get('/produtos/');
export const createProduto = (data) => api.post('/produtos/', data);
export const updateProduto = (id, data) => api.put(`/produtos/${id}/`, data);
export const deleteProduto = (id) => api.delete(`/produtos/${id}/`);

// Clientes
export const getClientes = () => api.get('/clientes/');
export const createCliente = (data) => api.post('/clientes/', data);
export const updateCliente = (id, data) => api.put(`/clientes/${id}/`, data);
export const deleteCliente = (id) => api.delete(`/clientes/${id}/`);

// Vendas
export const getVendas = () => api.get('/vendas/');
export const createVenda = (data) => api.post('/vendas/', data);
export const getVenda = (id) => api.get(`/vendas/${id}/`);

// Estatísticas
export const getEstatisticasSemanais = () => api.get('/estatisticas/semanais/');
export const getProdutosMaisVendidos = (limite = 10) => api.get(`/estatisticas/produtos-mais-vendidos/?limite=${limite}`);
export const getFaturamentoPeriodo = (dias = 30) => api.get(`/estatisticas/faturamento/?dias=${dias}`);

export default api;
