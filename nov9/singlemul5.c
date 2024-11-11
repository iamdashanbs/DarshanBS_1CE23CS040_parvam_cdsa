#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data,i;
    struct Node* next;
};

struct Node* createNode(int x);

struct Node* insertAtFront(struct Node* head, int new_data) {
    struct Node* new_node = createNode(new_data);
    new_node->next = head;
    return new_node;
}

void printList(struct Node* head) {
    struct Node* curr = head;
    while (curr != NULL) {
        for(i=1;i<=5;i++){}
        printf("5 x %d = %d",i,cur->data*i);
    }
        curr = curr->next;
    }
    printf("\n");
}

struct Node* createNode(int new_data) {
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
    new_node->data = new_data;
    new_node->next = NULL;
    return new_node;
}

int main() {
    struct Node* head = createNode(10);
    head->next = createNode(15);
    head->next->next = createNode(20);
    head->next->next->next = createNode(25);

    int data = 5;
    head = insertAtFront(head, data);
    printList(head);

    return 0;
}