#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node *next;
};

typedef struct node Node;


void Insert(Node *after, int newData ){
    struct Node *new_node =(struct Node*)malloc(sizeof(struct Node));
    if ( after == NULL){
        return 0;}

    new_node->data = newData;

    new_node-> next = after;

    after = new_node;



}




