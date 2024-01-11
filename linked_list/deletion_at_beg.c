#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node *next;
};

struct node *head;

void begin_delete() {
    struct node *ptr;

    if(head == NULL){
        printf("\nList is empty\n");
    }
    else {
        ptr = head;
        head = ptr -> next;
        free(ptr);
        printf("\nNode deleted from the beginning\n");
    }
}