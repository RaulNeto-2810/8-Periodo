#include <stdio.h>
#include <stdlib.h>

/* Estrutura de um nó da lista duplamente ligada */
typedef struct Node {
    int data;
    struct Node *next;
    struct Node *prev;
} Node;

/* Função para criar um novo nó */
Node* createNode(int data) {
    Node *newNode = (Node*)malloc(sizeof(Node));
    newNode->data = data;
    newNode->next = NULL;
    newNode->prev = NULL;
    return newNode;
}

/* Função para inserir um nó no final da lista */
void insert(Node **head, int data) {
    Node *newNode = createNode(data);
    if (*head == NULL) {
        *head = newNode;
    } else {
        Node *temp = *head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = newNode;
        newNode->prev = temp;
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
    Node *temp = *head;

    /* Procurar o nó a ser excluído */
    while (temp != NULL && temp->data != data) {
        temp = temp->next;
    }

    /* Se o nó não foi encontrado */
    if (temp == NULL) return;

    /* Atualizar ponteiros */
    if (temp->prev != NULL) {
        temp->prev->next = temp->next;
    } else {
        *head = temp->next;
    }
    if (temp->next != NULL) {
        temp->next->prev = temp->prev;
    }

    free(temp);
}

/* Função para imprimir a lista */
void printList(Node *head) {
    Node *temp = head;
    while (temp != NULL) {
        printf("%d <-> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

int main() {
    Node *head = NULL;

    insert(&head, 10);
    insert(&head, 20);
    insert(&head, 30);
    printf("Lista após inserções: ");
    printList(head);

    update(head, 20, 25);
    printf("Lista após atualização: ");
    printList(head);

    delete(&head, 10);
    printf("Lista após exclusão: ");
    printList(head);

    return 0;
}
