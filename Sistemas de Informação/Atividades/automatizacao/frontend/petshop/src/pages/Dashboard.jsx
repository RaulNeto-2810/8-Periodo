import { useState, useEffect } from 'react';
import {
  Chart as ChartJS,
  CategoryScale,
  LinearScale,
  BarElement,
  LineElement,
  PointElement,
  Title,
  Tooltip,
  Legend,
  ArcElement,
} from 'chart.js';
import { Bar, Line, Doughnut } from 'react-chartjs-2';
import {
  getEstatisticasSemanais,
  getProdutosMaisVendidos,
  getFaturamentoPeriodo
} from '../services/api';
import './Dashboard.css';

ChartJS.register(
  CategoryScale,
  LinearScale,
  BarElement,
  LineElement,
  PointElement,
  ArcElement,
  Title,
  Tooltip,
  Legend
);

function Dashboard() {
  const [estatisticasSemanais, setEstatisticasSemanais] = useState(null);
  const [produtosMaisVendidos, setProdutosMaisVendidos] = useState([]);
  const [faturamentoPeriodo, setFaturamentoPeriodo] = useState([]);
  const [loading, setLoading] = useState(true);
  const [diasPeriodo, setDiasPeriodo] = useState(30);

  useEffect(() => {
    carregarDados();
  }, [diasPeriodo]);

  const carregarDados = async () => {
    setLoading(true);
    try {
      const [estatisticas, produtos, faturamento] = await Promise.all([
        getEstatisticasSemanais(),
        getProdutosMaisVendidos(10),
        getFaturamentoPeriodo(diasPeriodo)
      ]);

      setEstatisticasSemanais(estatisticas.data);
      setProdutosMaisVendidos(produtos.data);
      setFaturamentoPeriodo(faturamento.data);
    } catch (error) {
      console.error('Erro ao carregar dados do dashboard:', error);
    } finally {
      setLoading(false);
    }
  };

  const dadosFaturamento = {
    labels: faturamentoPeriodo.map(f => {
      const data = new Date(f.data);
      return data.toLocaleDateString('pt-BR', { day: '2-digit', month: '2-digit' });
    }),
    datasets: [
      {
        label: 'Faturamento (R$)',
        data: faturamentoPeriodo.map(f => f.faturamento),
        borderColor: 'rgb(75, 192, 192)',
        backgroundColor: 'rgba(75, 192, 192, 0.2)',
        tension: 0.3,
      },
    ],
  };

  const dadosProdutos = {
    labels: produtosMaisVendidos.map(p => p.produto_nome || 'Produto'),
    datasets: [
      {
        label: 'Quantidade Vendida',
        data: produtosMaisVendidos.map(p => p.quantidade_total),
        backgroundColor: [
          'rgba(255, 99, 132, 0.7)',
          'rgba(54, 162, 235, 0.7)',
          'rgba(255, 206, 86, 0.7)',
          'rgba(75, 192, 192, 0.7)',
          'rgba(153, 102, 255, 0.7)',
          'rgba(255, 159, 64, 0.7)',
          'rgba(199, 199, 199, 0.7)',
          'rgba(83, 102, 255, 0.7)',
          'rgba(255, 102, 153, 0.7)',
          'rgba(102, 255, 178, 0.7)',
        ],
      },
    ],
  };

  const dadosVendasDiarias = {
    labels: faturamentoPeriodo.map(f => {
      const data = new Date(f.data);
      return data.toLocaleDateString('pt-BR', { day: '2-digit', month: '2-digit' });
    }),
    datasets: [
      {
        label: 'Número de Vendas',
        data: faturamentoPeriodo.map(f => f.quantidade_vendas),
        backgroundColor: 'rgba(153, 102, 255, 0.7)',
        borderColor: 'rgba(153, 102, 255, 1)',
        borderWidth: 1,
      },
    ],
  };

  // Calcular métricas do período selecionado (antes de usar nos gráficos)
  const totalVendasPeriodo = faturamentoPeriodo.reduce((acc, f) => acc + (f.quantidade_vendas || 0), 0);
  const faturamentoTotalPeriodo = faturamentoPeriodo.reduce((acc, f) => acc + (f.faturamento || 0), 0);
  const ticketMedio = totalVendasPeriodo > 0 ? faturamentoTotalPeriodo / totalVendasPeriodo : 0;

  // Gráfico de Ticket Médio ao longo do tempo
  const dadosTicketMedio = {
    labels: faturamentoPeriodo.map(f => {
      const data = new Date(f.data);
      return data.toLocaleDateString('pt-BR', { day: '2-digit', month: '2-digit' });
    }),
    datasets: [
      {
        label: 'Ticket Médio (R$)',
        data: faturamentoPeriodo.map(f => {
          const ticket = f.quantidade_vendas > 0 ? f.faturamento / f.quantidade_vendas : 0;
          return ticket.toFixed(2);
        }),
        borderColor: 'rgb(255, 159, 64)',
        backgroundColor: 'rgba(255, 159, 64, 0.2)',
        tension: 0.3,
      },
    ],
  };

  // Gráfico de Faturamento vs Vendas (comparativo)
  const dadosComparativo = {
    labels: faturamentoPeriodo.slice(-7).map(f => {
      const data = new Date(f.data);
      return data.toLocaleDateString('pt-BR', { day: '2-digit', month: '2-digit' });
    }),
    datasets: [
      {
        label: 'Faturamento (R$)',
        data: faturamentoPeriodo.slice(-7).map(f => f.faturamento),
        backgroundColor: 'rgba(139, 111, 71, 0.7)',
        borderColor: 'rgba(139, 111, 71, 1)',
        borderWidth: 2,
        yAxisID: 'y',
      },
      {
        label: 'Número de Vendas',
        data: faturamentoPeriodo.slice(-7).map(f => f.quantidade_vendas),
        backgroundColor: 'rgba(75, 192, 192, 0.7)',
        borderColor: 'rgba(75, 192, 192, 1)',
        borderWidth: 2,
        yAxisID: 'y1',
      },
    ],
  };

  // Gráfico de Pizza - Distribuição de Valor por Produto
  const dadosDistribuicaoValor = {
    labels: produtosMaisVendidos.slice(0, 8).map(p => p.produto_nome || 'Produto'),
    datasets: [
      {
        label: 'Valor Total (R$)',
        data: produtosMaisVendidos.slice(0, 8).map(p => p.valor_total || 0),
        backgroundColor: [
          'rgba(139, 111, 71, 0.8)',
          'rgba(107, 86, 56, 0.8)',
          'rgba(193, 122, 90, 0.8)',
          'rgba(168, 103, 73, 0.8)',
          'rgba(125, 108, 74, 0.8)',
          'rgba(245, 240, 235, 0.8)',
          'rgba(232, 223, 214, 0.8)',
          'rgba(212, 196, 180, 0.8)',
        ],
        borderWidth: 2,
        borderColor: '#fff',
      },
    ],
  };

  // Gráfico de Área - Faturamento Acumulado
  const faturamentoAcumulado = faturamentoPeriodo.reduce((acc, f, index) => {
    const acumulado = index > 0 ? acc[index - 1] + f.faturamento : f.faturamento;
    return [...acc, acumulado];
  }, []);

  const dadosFaturamentoAcumulado = {
    labels: faturamentoPeriodo.map(f => {
      const data = new Date(f.data);
      return data.toLocaleDateString('pt-BR', { day: '2-digit', month: '2-digit' });
    }),
    datasets: [
      {
        label: 'Faturamento Acumulado (R$)',
        data: faturamentoAcumulado,
        borderColor: 'rgb(34, 139, 34)',
        backgroundColor: 'rgba(34, 139, 34, 0.2)',
        fill: true,
        tension: 0.4,
      },
    ],
  };

  // Gráfico de Barras Horizontais - Top 5 Produtos por Valor
  const dadosTop5Valor = {
    labels: produtosMaisVendidos.slice(0, 5).map(p => p.produto_nome || 'Produto'),
    datasets: [
      {
        label: 'Valor Total (R$)',
        data: produtosMaisVendidos.slice(0, 5).map(p => p.valor_total || 0),
        backgroundColor: [
          'rgba(139, 111, 71, 0.9)',
          'rgba(107, 86, 56, 0.9)',
          'rgba(193, 122, 90, 0.9)',
          'rgba(168, 103, 73, 0.9)',
          'rgba(125, 108, 74, 0.9)',
        ],
        borderColor: [
          'rgba(139, 111, 71, 1)',
          'rgba(107, 86, 56, 1)',
          'rgba(193, 122, 90, 1)',
          'rgba(168, 103, 73, 1)',
          'rgba(125, 108, 74, 1)',
        ],
        borderWidth: 2,
      },
    ],
  };

  // Gráfico de Linha Dupla - Faturamento e Ticket Médio
  const dadosFaturamentoTicket = {
    labels: faturamentoPeriodo.map(f => {
      const data = new Date(f.data);
      return data.toLocaleDateString('pt-BR', { day: '2-digit', month: '2-digit' });
    }),
    datasets: [
      {
        label: 'Faturamento (R$)',
        data: faturamentoPeriodo.map(f => f.faturamento),
        borderColor: 'rgb(139, 111, 71)',
        backgroundColor: 'rgba(139, 111, 71, 0.1)',
        yAxisID: 'y',
        tension: 0.3,
      },
      {
        label: 'Ticket Médio (R$)',
        data: faturamentoPeriodo.map(f => {
          return f.quantidade_vendas > 0 ? (f.faturamento / f.quantidade_vendas).toFixed(2) : 0;
        }),
        borderColor: 'rgb(255, 99, 132)',
        backgroundColor: 'rgba(255, 99, 132, 0.1)',
        yAxisID: 'y1',
        tension: 0.3,
      },
    ],
  };

  // Análise de Crescimento - Comparativo de períodos
  const mediaFaturamentoDiario = faturamentoTotalPeriodo / (diasPeriodo || 1);
  const mediaPorSemana = mediaFaturamentoDiario * 7;
  const projecaoMensal = mediaFaturamentoDiario * 30;

  // Gráfico de Barras - Projeções
  const dadosProjecoes = {
    labels: ['Média Diária', 'Projeção Semanal', 'Projeção Mensal'],
    datasets: [
      {
        label: 'Faturamento Projetado (R$)',
        data: [
          mediaFaturamentoDiario.toFixed(2),
          mediaPorSemana.toFixed(2),
          projecaoMensal.toFixed(2),
        ],
        backgroundColor: [
          'rgba(255, 206, 86, 0.8)',
          'rgba(75, 192, 192, 0.8)',
          'rgba(54, 162, 235, 0.8)',
        ],
        borderColor: [
          'rgba(255, 206, 86, 1)',
          'rgba(75, 192, 192, 1)',
          'rgba(54, 162, 235, 1)',
        ],
        borderWidth: 2,
      },
    ],
  };

  const opcoesGrafico = {
    responsive: true,
    maintainAspectRatio: false,
    plugins: {
      legend: {
        position: 'top',
      },
      title: {
        display: false,
      },
    },
  };

  const opcoesComparativo = {
    responsive: true,
    maintainAspectRatio: false,
    interaction: {
      mode: 'index',
      intersect: false,
    },
    plugins: {
      legend: {
        position: 'top',
      },
    },
    scales: {
      y: {
        type: 'linear',
        display: true,
        position: 'left',
        title: {
          display: true,
          text: 'Faturamento (R$)',
        },
      },
      y1: {
        type: 'linear',
        display: true,
        position: 'right',
        title: {
          display: true,
          text: 'Número de Vendas',
        },
        grid: {
          drawOnChartArea: false,
        },
      },
    },
  };

  const opcoesHorizontal = {
    indexAxis: 'y',
    responsive: true,
    maintainAspectRatio: false,
    plugins: {
      legend: {
        display: false,
      },
    },
    scales: {
      x: {
        beginAtZero: true,
      },
    },
  };

  const opcoesDuploEixo = {
    responsive: true,
    maintainAspectRatio: false,
    interaction: {
      mode: 'index',
      intersect: false,
    },
    plugins: {
      legend: {
        position: 'top',
      },
    },
    scales: {
      y: {
        type: 'linear',
        display: true,
        position: 'left',
      },
      y1: {
        type: 'linear',
        display: true,
        position: 'right',
        grid: {
          drawOnChartArea: false,
        },
      },
    },
  };

  const labelPeriodo = diasPeriodo === 7 ? 'Últimos 7 dias' :
                       diasPeriodo === 15 ? 'Últimos 15 dias' :
                       diasPeriodo === 30 ? 'Últimos 30 dias' :
                       diasPeriodo === 60 ? 'Últimos 60 dias' :
                       'Últimos 90 dias';

  if (loading) {
    return (
      <div className="dashboard">
        <div className="loading">Carregando dados...</div>
      </div>
    );
  }

  return (
    <div className="dashboard">
      <h2>
        <ion-icon name="stats-chart"></ion-icon>
        Dashboard de Vendas - Automático
      </h2>

      <div className="cards-container">
        <div className="card">
          <h3>Total de Vendas</h3>
          <div className="card-value">{totalVendasPeriodo}</div>
          <div className="card-label">{labelPeriodo}</div>
        </div>

        <div className="card">
          <h3>Faturamento Total</h3>
          <div className="card-value">
            R$ {faturamentoTotalPeriodo.toFixed(2)}
          </div>
          <div className="card-label">{labelPeriodo}</div>
        </div>

        <div className="card">
          <h3>Ticket Médio</h3>
          <div className="card-value">R$ {ticketMedio.toFixed(2)}</div>
          <div className="card-label">{labelPeriodo}</div>
        </div>
      </div>

      <div className="periodo-selector">
        <label>Período de análise:</label>
        <select value={diasPeriodo} onChange={(e) => setDiasPeriodo(Number(e.target.value))}>
          <option value={7}>Últimos 7 dias</option>
          <option value={15}>Últimos 15 dias</option>
          <option value={30}>Últimos 30 dias</option>
          <option value={60}>Últimos 60 dias</option>
          <option value={90}>Últimos 90 dias</option>
        </select>
      </div>

      <div className="charts-grid">
        <div className="chart-container">
          <h3>Faturamento no Período</h3>
          <div className="chart-wrapper">
            <Line data={dadosFaturamento} options={opcoesGrafico} />
          </div>
        </div>

        <div className="chart-container">
          <h3>Vendas Diárias</h3>
          <div className="chart-wrapper">
            <Bar data={dadosVendasDiarias} options={opcoesGrafico} />
          </div>
        </div>

        <div className="chart-container">
          <h3>Evolução do Ticket Médio</h3>
          <div className="chart-wrapper">
            <Line data={dadosTicketMedio} options={opcoesGrafico} />
          </div>
        </div>

        <div className="chart-container">
          <h3>Faturamento vs Vendas (Últimos 7 dias)</h3>
          <div className="chart-wrapper">
            <Bar data={dadosComparativo} options={opcoesComparativo} />
          </div>
        </div>

        <div className="chart-container">
          <h3>Produtos Mais Vendidos (Quantidade)</h3>
          <div className="chart-wrapper">
            <Doughnut data={dadosProdutos} options={opcoesGrafico} />
          </div>
        </div>

        <div className="chart-container">
          <h3>Distribuição de Valor por Produto</h3>
          <div className="chart-wrapper">
            <Doughnut data={dadosDistribuicaoValor} options={opcoesGrafico} />
          </div>
        </div>

        <div className="chart-container">
          <h3>Faturamento Acumulado</h3>
          <div className="chart-wrapper">
            <Line data={dadosFaturamentoAcumulado} options={opcoesGrafico} />
          </div>
        </div>

        <div className="chart-container">
          <h3>Top 5 Produtos por Faturamento</h3>
          <div className="chart-wrapper">
            <Bar data={dadosTop5Valor} options={opcoesHorizontal} />
          </div>
        </div>

        <div className="chart-container">
          <h3>Faturamento vs Ticket Médio</h3>
          <div className="chart-wrapper">
            <Line data={dadosFaturamentoTicket} options={opcoesDuploEixo} />
          </div>
        </div>

        <div className="chart-container">
          <h3>Projeções de Faturamento</h3>
          <div className="chart-wrapper">
            <Bar data={dadosProjecoes} options={opcoesGrafico} />
          </div>
        </div>

        <div className="chart-container">
          <h3>Top 10 Produtos</h3>
          <div className="produtos-lista">
            <table>
              <thead>
                <tr>
                  <th>#</th>
                  <th>Produto</th>
                  <th>Quantidade</th>
                  <th>Valor Total</th>
                </tr>
              </thead>
              <tbody>
                {produtosMaisVendidos.map((produto, index) => (
                  <tr key={index}>
                    <td>{index + 1}</td>
                    <td>{produto.produto_nome}</td>
                    <td>{produto.quantidade_total}</td>
                    <td>R$ {produto.valor_total?.toFixed(2) || '0.00'}</td>
                  </tr>
                ))}
              </tbody>
            </table>
            {produtosMaisVendidos.length === 0 && (
              <div className="empty-state">Nenhum produto vendido no período</div>
            )}
          </div>
        </div>
      </div>
    </div>
  );
}

export default Dashboard;
