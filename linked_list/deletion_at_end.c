#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node *next
};

struct node *head;

void last_delete() {
    struct node *ptr, *ptr1;
    if(head == NULL) {
        printf("\nList is empty");
    }
    else if(head->next == NULL){
        head = NULL;
        free(head);
        printf('\n there was only one node which is deleted');
    }
    else {
        ptr = head;
        while (ptr->next != NULL)
        {
            ptr1 = ptr;
            ptr = ptr -> next;
        }
        ptr1 -> next = NULL;
        free(ptr);
        printf("\nDeleted node from the last..\n");
        
    }
}