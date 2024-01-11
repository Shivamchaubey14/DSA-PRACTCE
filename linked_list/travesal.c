#include<stdio.h>
#include<stdlib.h>

struct node
{
    /* data */
    int data;
    struct node *next;
};
struct node *head;

void traverse();

void main() {
    traverse();
}

void traverse() {
    struct node *ptr;
    ptr = head;
    if(ptr = NULL){
        printf("Linked list is empty");
    }
    else {
        printf("\n Printing Values..\n");
        while (ptr!=NULL)
        {
            printf("\n%d", ptr->data);
            ptr = ptr -> next;
        }
        
    }
}