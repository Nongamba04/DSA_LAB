#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
};
typedef struct node Node;

void Insert(Node *prev, int newData ){
    Node *new_node =(Node*)malloc(sizeof(Node));
    if ( prev == NULL){
        return ;}

    new_node->data = newData;

    new_node->next = prev->next;

    prev-> next = new_node;

}

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
        printf(" %d", node->data);
        node = node->next;
    }
    printf("\n");
}

int main()
{
    // empty list
    Node* head = NULL;
 
    push(&head, 6);
    push(&head, 5);
    push(&head, 4);
    push(&head, 3);
    push(&head, 2);
 
    printf("Created Linked list is: ");
    printList(head);
 
    Insert(head, 1);
 
    printf("After inserting 1 after 2: ");
    printList(head);
 
    return 0;
}
