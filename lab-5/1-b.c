#include<stdio.h>
#include<stdlib.h>

 struct node{
    int data;
    struct node *next;
};
typedef struct node Node;

// void Insert( Node *prev, int newData ){
//     Node *new_node =(Node*)malloc(sizeof(Node));
//     if ( prev == NULL){
//         return ;}

//     new_node->data = newData;

//     new_node-> next = NULL;

//     prev->next = new_node;

// }


void push( Node** head, int newData)
{
    Node* new_node = (Node*)malloc(sizeof(Node));
    new_node->data = newData;
    new_node->next = (*head);
    (*head) = new_node;
}

void append(Node** head_ref, int new_data)
{
    Node* new_node
        = (Node*)malloc(sizeof(Node));
    new_node->data = new_data;
 
    Node* last = *head_ref;

    new_node->next = NULL;

    if (*head_ref == NULL) {
        *head_ref = new_node;
        return;
    }
 
    
    while (last->next != NULL) {
        last = last->next;
    }
 
    last->next = new_node;
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
 
   for(int i = 1; i<8; i++){
    push(&head, i);
   }
 
    printf("Created Linked list is: ");
    printList(head);
 
    append(&head, 1);
 
    printf("After inserting 1 at the end: ");
    printList(head);
 
    return 0;
}