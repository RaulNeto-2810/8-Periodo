from django.urls import path
from . import views

urlpatterns = [
    # Produtos
    path('produtos/', views.produtos_list, name='produtos-list'),
    path('produtos/<str:pk>/', views.produto_detail, name='produto-detail'),

    # Vendas
    path('vendas/', views.vendas_list, name='vendas-list'),
    path('vendas/<str:pk>/', views.venda_detail, name='venda-detail'),

    # Clientes
    path('clientes/', views.clientes_list, name='clientes-list'),
    path('clientes/<str:pk>/', views.cliente_detail, name='cliente-detail'),

    # Estatísticas / Dashboard
    path('estatisticas/semanais/', views.estatisticas_semanais, name='estatisticas-semanais'),
    path('estatisticas/produtos-mais-vendidos/', views.produtos_mais_vendidos, name='produtos-mais-vendidos'),
    path('estatisticas/faturamento/', views.faturamento_periodo, name='faturamento-periodo'),
]
