#include <stdio.h>
#include <stdlib.h>

typedef struct _node {
    int data;
    struct _node *next;
} Node;

/* typedef struct Node Node; */

/* Função para criar um novo nó */
Node * createNode(int data) {
    Node * newNode = (Node*) malloc(sizeof(Node));
    if (newNode == NULL) {
        printf("[ERROR] falha na alocação de nó para a lista\n");
        exit(1234);
    }
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

/* Função para inserir um nó na cabeça da lista */
void insert(Node **head, int data) {
    Node *newNode = createNode(data);
    if (*head == NULL) {
        *head = newNode;
    } else {
        newNode->next = *head;
        *head = newNode;
    }
}

/* Função para alterar os dados de um nó */
void update(Node *head, int oldData, int newData) {
    
    Node *temp = head;

    while (temp != NULL) {
        if (temp->data == oldData) {
            temp->data = newData;
            return;
        }
        temp = temp->next;
    }
    printf("Valor %d não encontrado na lista.\n", oldData);
}

/* Função para excluir um nó */
void delete(Node **head, int data) {

    Node *temp = *head, *prev = NULL;

    /* Se o nó a ser excluído é o nó cabeça */
    if (temp != NULL && temp->data == data) {
        *head = temp->next;
        free(temp);
        return;
    }

    /* Procurar o nó a ser excluído */
    while (temp != NULL && temp->data != data) {
        prev = temp;
        temp = temp->next;
    }

    /* Se o nó não foi encontrado */
    if (temp == NULL) {
        printf("[WARN] nó não encontrado: %d\n", data);
        return;
    }

    /* Desconectar o nó da lista e liberar memória */
    prev->next = temp->next;
    free(temp);
}

/* Função para imprimir a lista */
void printList(Node *head) {
    Node *temp = head;
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

int main() {

    Node * head = NULL;

    insert(&head, 10);
    insert(&head, 20);
    insert(&head, 30);
    insert(&head, 6);
    insert(&head, 5);
    printf("Lista após inserções: ");
    printList(head);

    update(head, 2000, 25);
    printf("Lista após atualização: ");
    printList(head);

    delete(&head, 10);
    printf("Lista após exclusão: ");
    printList(head);

    delete(&head, 555);
    printf("Lista após exclusão: ");
    printList(head);

    return 0;
}
