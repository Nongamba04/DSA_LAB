#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node *next;
};

typedef struct Node Node;

void push( Node** head, int newData)
{
    Node* new_node = (Node*)malloc(sizeof(Node));
    new_node->data = newData;
    new_node->next = (*head);
    (*head) = new_node;
}

void printList(Node* node)
{
    while (node != NULL) {
        printf("%d->", node->data);
        node = node->next;
    }
    printf("NULL");
    printf("\n");
}

void Reverse(Node **head){
    if(head == NULL){
        return ;
    }
    Node *curr = *head;
    Node *prev = NULL;
    Node *next = NULL;
    while(curr != NULL){
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    *head = prev; 

}

int main(){
    Node *head = NULL;
    push(&head ,10 );
    push(&head ,20 );
    push(&head ,30 );
    push(&head ,40 );
    
    printf("Created List: ");
    printList(head);

    Reverse(&head);
    
    printf ("Reversed list is : \n");
    printList(head);

    return 0;


}