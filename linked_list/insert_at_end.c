// inserting in singly linked list at the end

// There could be two scenarios which need to be mentioned

// the node is being added to an empty list

// The node is being added to the end of the linked list

#include<stdio.h>
#include<stdlib.h>

void lastInsert(int);

struct node {
    int data;
    struct node *next;
};

struct node *head;

void main(){
    int choice, item;
    do {
        printf("\nEnter the item which you want to insert\n");
        scanf("%d", &item);
        lastInsert(item);
        printf("\n Press 0 to insert more?\n");
        scanf("%d",&choice);
    }while(choice == 0);
}

// function for inserting the node at last 

void lastInsert(int item) {
    struct node *ptr = (struct node*)malloc(sizeof(struct node));
    struct node *temp;
    if(ptr == NULL){
        printf("\nOVERFLOW\n");
    }
    else {
        ptr -> data = item;
        if(head == NULL) {
            ptr -> next == NULL;
            head = ptr;
            printf("\n Node inserted");
        }
        else{
            temp = head;
            while (temp -> next != NULL)
            {
                temp = temp -> next;
            }
            temp -> next = ptr;
            ptr -> next = NULL;
            printf("\n Node Inserted");
        }
    }
}