import { BrowserRouter as Router, Routes, Route, Link } from 'react-router-dom'
import './App.css'
import CadastroVendas from './pages/CadastroVendas'
import Dashboard from './pages/Dashboard'

function App() {
  return (
    <Router>
      <div className="app">
        <nav className="navbar">
          <div className="nav-container">
            <h1 className="nav-logo">
              <ion-icon name="paw"></ion-icon>
              PetShop
            </h1>
            <ul className="nav-menu">
              <li className="nav-item">
                <Link to="/" className="nav-link">Cadastro de Vendas</Link>
              </li>
              <li className="nav-item">
                <Link to="/dashboard" className="nav-link">Dashboard</Link>
              </li>
            </ul>
          </div>
        </nav>

        <main className="main-content">
          <Routes>
            <Route path="/" element={<CadastroVendas />} />
            <Route path="/dashboard" element={<Dashboard />} />
          </Routes>
        </main>
      </div>
    </Router>
  )
}

export default App
