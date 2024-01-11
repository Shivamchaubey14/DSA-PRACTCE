#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node *next;
};

struct node *head;

void random_delete();

void main() {
    random_delete();
}

void random_delete() {
    struct node *ptr, *ptr1;
    int loc, i;
    printf("\n Enter the location of the node after which you perform the deletion");
    scanf("%d", &loc);
    ptr = head;

    for(i = 0; i<loc;i++){
        ptr1 = ptr;
        ptr = ptr -> next;

        if(ptr == NULL){
            printf("\n Can't delete\n");
            return;
        }
    }
    ptr1 -> next = ptr -> next;
    free(ptr);
    printf("Deleted node %d", loc+1);
}