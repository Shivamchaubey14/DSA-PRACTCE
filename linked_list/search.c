#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node *next;
};

struct node *head;

void search();

void main(){
    search();
}

void search() {
    struct node *ptr;
    int item, i=0, flag;
    ptr = head;
    if(ptr == NULL){
        printf("\n List is empty\n");
    }
    else {
        printf("\nEnter item which you want to search\n?");
        scanf("%d",&item);
        while (ptr!=NULL)
        {
            if(ptr -> data == item){
                printf("item found at location %d",i+1);
                flag = 0;
            }
            else {
                flag = 1;
            }
            i++;
            ptr = ptr->next;
        }
        if(flag == 1){
            printf("Item not found\n");
        }
    }
}