import { useState, useEffect } from 'react';
import {
  getProdutos,
  createProduto,
  getClientes,
  createCliente,
  createVenda
} from '../services/api';
import './CadastroVendas.css';

function CadastroVendas() {
  const [activeTab, setActiveTab] = useState('venda');
  const [produtos, setProdutos] = useState([]);
  const [clientes, setClientes] = useState([]);
  const [mensagem, setMensagem] = useState({ tipo: '', texto: '' });

  // Estados para Produto
  const [novoProduto, setNovoProduto] = useState({
    nome: '',
    descricao: '',
    preco: '',
    estoque: ''
  });

  // Estados para Cliente
  const [novoCliente, setNovoCliente] = useState({
    nome: '',
    email: '',
    telefone: '',
    endereco: ''
  });

  // Estados para Venda
  const [novaVenda, setNovaVenda] = useState({
    cliente_id: '',
    cliente_nome: '',
    itens: [],
    valor_total: 0
  });

  const [itemVenda, setItemVenda] = useState({
    produto_id: '',
    produto_nome: '',
    quantidade: 1,
    preco_unitario: 0,
    subtotal: 0
  });

  useEffect(() => {
    carregarProdutos();
    carregarClientes();
  }, []);

  const carregarProdutos = async () => {
    try {
      const response = await getProdutos();
      setProdutos(response.data);
    } catch (error) {
      console.error('Erro ao carregar produtos:', error);
    }
  };

  const carregarClientes = async () => {
    try {
      const response = await getClientes();
      setClientes(response.data);
    } catch (error) {
      console.error('Erro ao carregar clientes:', error);
    }
  };

  const mostrarMensagem = (tipo, texto) => {
    setMensagem({ tipo, texto });
    setTimeout(() => setMensagem({ tipo: '', texto: '' }), 3000);
  };

  // Funções para Produto
  const handleProdutoChange = (e) => {
    setNovoProduto({
      ...novoProduto,
      [e.target.name]: e.target.value
    });
  };

  const handleSubmitProduto = async (e) => {
    e.preventDefault();
    try {
      await createProduto({
        ...novoProduto,
        preco: parseFloat(novoProduto.preco),
        estoque: parseInt(novoProduto.estoque)
      });
      mostrarMensagem('sucesso', 'Produto cadastrado com sucesso!');
      setNovoProduto({ nome: '', descricao: '', preco: '', estoque: '' });
      carregarProdutos();
    } catch (error) {
      mostrarMensagem('erro', 'Erro ao cadastrar produto');
      console.error(error);
    }
  };

  // Funções para Cliente
  const handleClienteChange = (e) => {
    setNovoCliente({
      ...novoCliente,
      [e.target.name]: e.target.value
    });
  };

  const handleSubmitCliente = async (e) => {
    e.preventDefault();
    try {
      await createCliente(novoCliente);
      mostrarMensagem('sucesso', 'Cliente cadastrado com sucesso!');
      setNovoCliente({ nome: '', email: '', telefone: '', endereco: '' });
      carregarClientes();
    } catch (error) {
      mostrarMensagem('erro', 'Erro ao cadastrar cliente');
      console.error(error);
    }
  };

  // Funções para Venda
  const handleClienteVendaChange = (e) => {
    const clienteId = e.target.value;
    const cliente = clientes.find(c => c._id === clienteId);
    setNovaVenda({
      ...novaVenda,
      cliente_id: clienteId,
      cliente_nome: cliente ? cliente.nome : ''
    });
  };

  const handleProdutoVendaChange = (e) => {
    const produtoId = e.target.value;
    const produto = produtos.find(p => p._id === produtoId);
    if (produto) {
      const subtotal = produto.preco * itemVenda.quantidade;
      setItemVenda({
        ...itemVenda,
        produto_id: produtoId,
        produto_nome: produto.nome,
        preco_unitario: produto.preco,
        subtotal: subtotal
      });
    }
  };

  const handleQuantidadeChange = (e) => {
    const quantidade = parseInt(e.target.value) || 1;
    const subtotal = itemVenda.preco_unitario * quantidade;
    setItemVenda({
      ...itemVenda,
      quantidade: quantidade,
      subtotal: subtotal
    });
  };

  const adicionarItem = () => {
    if (!itemVenda.produto_id || itemVenda.quantidade <= 0) {
      mostrarMensagem('erro', 'Selecione um produto e quantidade válida');
      return;
    }

    const novosItens = [...novaVenda.itens, { ...itemVenda }];
    const valorTotal = novosItens.reduce((sum, item) => sum + item.subtotal, 0);

    setNovaVenda({
      ...novaVenda,
      itens: novosItens,
      valor_total: valorTotal
    });

    setItemVenda({
      produto_id: '',
      produto_nome: '',
      quantidade: 1,
      preco_unitario: 0,
      subtotal: 0
    });
  };

  const removerItem = (index) => {
    const novosItens = novaVenda.itens.filter((_, i) => i !== index);
    const valorTotal = novosItens.reduce((sum, item) => sum + item.subtotal, 0);
    setNovaVenda({
      ...novaVenda,
      itens: novosItens,
      valor_total: valorTotal
    });
  };

  const handleSubmitVenda = async (e) => {
    e.preventDefault();
    if (!novaVenda.cliente_id || novaVenda.itens.length === 0) {
      mostrarMensagem('erro', 'Selecione um cliente e adicione pelo menos um item');
      return;
    }

    try {
      await createVenda(novaVenda);
      mostrarMensagem('sucesso', 'Venda registrada com sucesso!');
      setNovaVenda({
        cliente_id: '',
        cliente_nome: '',
        itens: [],
        valor_total: 0
      });
    } catch (error) {
      mostrarMensagem('erro', 'Erro ao registrar venda');
      console.error(error);
    }
  };

  return (
    <div className="cadastro-vendas">
      <h2>
        <ion-icon name="cart"></ion-icon>
        Cadastro de Dados
      </h2>

      {mensagem.texto && (
        <div className={`mensagem ${mensagem.tipo}`}>
          {mensagem.texto}
        </div>
      )}

      <div className="tabs">
        <button
          className={`tab ${activeTab === 'venda' ? 'active' : ''}`}
          onClick={() => setActiveTab('venda')}
        >
          Nova Venda
        </button>
        <button
          className={`tab ${activeTab === 'produto' ? 'active' : ''}`}
          onClick={() => setActiveTab('produto')}
        >
          Cadastrar Produto
        </button>
        <button
          className={`tab ${activeTab === 'cliente' ? 'active' : ''}`}
          onClick={() => setActiveTab('cliente')}
        >
          Cadastrar Cliente
        </button>
      </div>

      <div className="tab-content">
        {activeTab === 'produto' && (
          <form onSubmit={handleSubmitProduto} className="form">
            <h3>
              <ion-icon name="cube"></ion-icon>
              Cadastrar Produto
            </h3>
            <div className="form-group">
              <label>Nome do Produto:</label>
              <input
                type="text"
                name="nome"
                value={novoProduto.nome}
                onChange={handleProdutoChange}
                required
              />
            </div>
            <div className="form-group">
              <label>Descrição:</label>
              <textarea
                name="descricao"
                value={novoProduto.descricao}
                onChange={handleProdutoChange}
                rows="3"
              />
            </div>
            <div className="form-row">
              <div className="form-group">
                <label>Preço (R$):</label>
                <input
                  type="number"
                  name="preco"
                  value={novoProduto.preco}
                  onChange={handleProdutoChange}
                  step="0.01"
                  min="0"
                  required
                />
              </div>
              <div className="form-group">
                <label>Estoque:</label>
                <input
                  type="number"
                  name="estoque"
                  value={novoProduto.estoque}
                  onChange={handleProdutoChange}
                  min="0"
                  required
                />
              </div>
            </div>
            <button type="submit" className="btn-submit">Cadastrar Produto</button>
          </form>
        )}

        {activeTab === 'cliente' && (
          <form onSubmit={handleSubmitCliente} className="form">
            <h3>
              <ion-icon name="person"></ion-icon>
              Cadastrar Cliente
            </h3>
            <div className="form-group">
              <label>Nome:</label>
              <input
                type="text"
                name="nome"
                value={novoCliente.nome}
                onChange={handleClienteChange}
                required
              />
            </div>
            <div className="form-group">
              <label>Email:</label>
              <input
                type="email"
                name="email"
                value={novoCliente.email}
                onChange={handleClienteChange}
                required
              />
            </div>
            <div className="form-group">
              <label>Telefone:</label>
              <input
                type="tel"
                name="telefone"
                value={novoCliente.telefone}
                onChange={handleClienteChange}
                required
              />
            </div>
            <div className="form-group">
              <label>Endereço:</label>
              <input
                type="text"
                name="endereco"
                value={novoCliente.endereco}
                onChange={handleClienteChange}
              />
            </div>
            <button type="submit" className="btn-submit">Cadastrar Cliente</button>
          </form>
        )}

        {activeTab === 'venda' && (
          <form onSubmit={handleSubmitVenda} className="form">
            <h3>Registrar Venda</h3>
            <div className="form-group">
              <label>Cliente:</label>
              <select
                value={novaVenda.cliente_id}
                onChange={handleClienteVendaChange}
                required
              >
                <option value="">Selecione um cliente</option>
                {clientes.map(cliente => (
                  <option key={cliente._id} value={cliente._id}>
                    {cliente.nome}
                  </option>
                ))}
              </select>
            </div>

            <div className="venda-items">
              <h4>Adicionar Itens</h4>
              <div className="form-row">
                <div className="form-group flex-2">
                  <label>Produto:</label>
                  <select
                    value={itemVenda.produto_id}
                    onChange={handleProdutoVendaChange}
                  >
                    <option value="">Selecione um produto</option>
                    {produtos.map(produto => (
                      <option key={produto._id} value={produto._id}>
                        {produto.nome} - R$ {produto.preco?.toFixed(2)}
                      </option>
                    ))}
                  </select>
                </div>
                <div className="form-group">
                  <label>Quantidade:</label>
                  <input
                    type="number"
                    value={itemVenda.quantidade}
                    onChange={handleQuantidadeChange}
                    min="1"
                  />
                </div>
                <div className="form-group">
                  <label>Subtotal:</label>
                  <input
                    type="text"
                    value={`R$ ${itemVenda.subtotal.toFixed(2)}`}
                    readOnly
                  />
                </div>
                <div className="form-group">
                  <label>&nbsp;</label>
                  <button type="button" onClick={adicionarItem} className="btn-add">
                    Adicionar
                  </button>
                </div>
              </div>
            </div>

            {novaVenda.itens.length > 0 && (
              <div className="itens-lista">
                <h4>
                  <ion-icon name="bag-handle"></ion-icon>
                  Itens da Venda
                </h4>
                <table>
                  <thead>
                    <tr>
                      <th>Produto</th>
                      <th>Quantidade</th>
                      <th>Preço Unit.</th>
                      <th>Subtotal</th>
                      <th>Ações</th>
                    </tr>
                  </thead>
                  <tbody>
                    {novaVenda.itens.map((item, index) => (
                      <tr key={index}>
                        <td>{item.produto_nome}</td>
                        <td>{item.quantidade}</td>
                        <td>R$ {item.preco_unitario.toFixed(2)}</td>
                        <td>R$ {item.subtotal.toFixed(2)}</td>
                        <td>
                          <button
                            type="button"
                            onClick={() => removerItem(index)}
                            className="btn-remove"
                          >
                            Remover
                          </button>
                        </td>
                      </tr>
                    ))}
                  </tbody>
                  <tfoot>
                    <tr>
                      <td colSpan="3"><strong>Total:</strong></td>
                      <td colSpan="2"><strong>R$ {novaVenda.valor_total.toFixed(2)}</strong></td>
                    </tr>
                  </tfoot>
                </table>
              </div>
            )}

            <button type="submit" className="btn-submit">Finalizar Venda</button>
          </form>
        )}
      </div>
    </div>
  );
}

export default CadastroVendas;
