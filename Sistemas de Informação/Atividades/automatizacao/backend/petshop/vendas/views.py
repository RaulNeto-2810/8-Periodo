from rest_framework.decorators import api_view
from rest_framework.response import Response
from rest_framework import status
from .mongodb import ProdutoService, VendaService, ClienteService


# === PRODUTOS ===
@api_view(['GET', 'POST'])
def produtos_list(request):
    service = ProdutoService()

    if request.method == 'GET':
        produtos = service.listar()
        return Response(produtos)

    elif request.method == 'POST':
        try:
            produto_id = service.criar(request.data)
            return Response({'id': produto_id, 'message': 'Produto criado com sucesso'}, status=status.HTTP_201_CREATED)
        except Exception as e:
            return Response({'error': str(e)}, status=status.HTTP_400_BAD_REQUEST)


@api_view(['GET', 'PUT', 'DELETE'])
def produto_detail(request, pk):
    service = ProdutoService()

    if request.method == 'GET':
        produto = service.buscar(pk)
        if produto:
            return Response(produto)
        return Response({'error': 'Produto não encontrado'}, status=status.HTTP_404_NOT_FOUND)

    elif request.method == 'PUT':
        try:
            sucesso = service.atualizar(pk, request.data)
            if sucesso:
                return Response({'message': 'Produto atualizado com sucesso'})
            return Response({'error': 'Produto não encontrado'}, status=status.HTTP_404_NOT_FOUND)
        except Exception as e:
            return Response({'error': str(e)}, status=status.HTTP_400_BAD_REQUEST)

    elif request.method == 'DELETE':
        sucesso = service.deletar(pk)
        if sucesso:
            return Response({'message': 'Produto deletado com sucesso'}, status=status.HTTP_204_NO_CONTENT)
        return Response({'error': 'Produto não encontrado'}, status=status.HTTP_404_NOT_FOUND)


# === VENDAS ===
@api_view(['GET', 'POST'])
def vendas_list(request):
    service = VendaService()

    if request.method == 'GET':
        vendas = service.listar()
        return Response(vendas)

    elif request.method == 'POST':
        try:
            venda_id = service.criar(request.data)
            return Response({'id': venda_id, 'message': 'Venda criada com sucesso'}, status=status.HTTP_201_CREATED)
        except Exception as e:
            return Response({'error': str(e)}, status=status.HTTP_400_BAD_REQUEST)


@api_view(['GET'])
def venda_detail(request, pk):
    service = VendaService()
    venda = service.buscar(pk)
    if venda:
        return Response(venda)
    return Response({'error': 'Venda não encontrada'}, status=status.HTTP_404_NOT_FOUND)


# === CLIENTES ===
@api_view(['GET', 'POST'])
def clientes_list(request):
    service = ClienteService()

    if request.method == 'GET':
        clientes = service.listar()
        return Response(clientes)

    elif request.method == 'POST':
        try:
            cliente_id = service.criar(request.data)
            return Response({'id': cliente_id, 'message': 'Cliente criado com sucesso'}, status=status.HTTP_201_CREATED)
        except Exception as e:
            return Response({'error': str(e)}, status=status.HTTP_400_BAD_REQUEST)


@api_view(['GET', 'PUT', 'DELETE'])
def cliente_detail(request, pk):
    service = ClienteService()

    if request.method == 'GET':
        cliente = service.buscar(pk)
        if cliente:
            return Response(cliente)
        return Response({'error': 'Cliente não encontrado'}, status=status.HTTP_404_NOT_FOUND)

    elif request.method == 'PUT':
        try:
            sucesso = service.atualizar(pk, request.data)
            if sucesso:
                return Response({'message': 'Cliente atualizado com sucesso'})
            return Response({'error': 'Cliente não encontrado'}, status=status.HTTP_404_NOT_FOUND)
        except Exception as e:
            return Response({'error': str(e)}, status=status.HTTP_400_BAD_REQUEST)

    elif request.method == 'DELETE':
        sucesso = service.deletar(pk)
        if sucesso:
            return Response({'message': 'Cliente deletado com sucesso'}, status=status.HTTP_204_NO_CONTENT)
        return Response({'error': 'Cliente não encontrado'}, status=status.HTTP_404_NOT_FOUND)


# === ESTATÍSTICAS / DASHBOARD ===
@api_view(['GET'])
def estatisticas_semanais(request):
    service = VendaService()
    estatisticas = service.estatisticas_semanais()
    return Response(estatisticas)


@api_view(['GET'])
def produtos_mais_vendidos(request):
    service = VendaService()
    limite = int(request.GET.get('limite', 10))
    produtos = service.produtos_mais_vendidos(limite)
    return Response(produtos)


@api_view(['GET'])
def faturamento_periodo(request):
    service = VendaService()
    dias = int(request.GET.get('dias', 30))
    faturamento = service.faturamento_por_periodo(dias)
    return Response(faturamento)
