#include<stdio.h>
#include<stdlib.h>

typedef struct Node{
    int data;
    struct Node *next;
};

void Insert(struct Node *head, int newData ){
    struct Node *new_node =(struct Node*)malloc(sizeof(struct Node));
    if ( head == NULL){
        return 0;}

    new_node->data = newData;

    new_node-> next = head;

}


