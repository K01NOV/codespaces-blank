#include <stdio.h>
#include <stdlib.h>

typedef struct Node{
    int data;
    struct Node* next;
} Node;

int main(){
    Node* head = NULL;
    Node* temp = NULL;

    for (int i = 5; i > 0; i--) {
        Node* newNode = (Node*)malloc(sizeof(Node));
        if (newNode == NULL) return 1;

        newNode->data = i;
        newNode->next = head;
        head = newNode;
    }

    Node* current = head;
    printf("List: ");
    while (current != NULL) {
        printf("%d ", current->data);
        current = current->next;
    }

    printf("\n");

    while (head != NULL) {
        temp = head;
        head = head->next;
        free(temp); 
    }
    return 0;
}