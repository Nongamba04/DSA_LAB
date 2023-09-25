// #include<stdio.h>
// #include<stdlib.h>

// struct Node{
//     int data;
//     Node *next;
// };
// typedef Node Node;

// void Insert(Node *head, int newData ){
//     Node *new_node =(Node*)malloc(sizeof(Node));
//     if ( head == NULL){
//         return 0;}

//     new_node->data = newData;

//     new_node-> next = head;

// }
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
        printf(" %d->", node->data);
        node = node->next;
    }
    printf("NULL");
    printf("\n");
}

int main()
{
    Node* head = NULL;
 
    push(&head, 6);
    push(&head, 5);
    push(&head, 4);
    push(&head, 3);
    push(&head, 2);
 
    printf("Created Linked list is: ");
    printList(head);
 

    Node *temp = head;
    head = head->next;
    free(temp);
    
 
    printf("After inserting 1 after 2: ");
    printList(head);
 
    return 0;
}
