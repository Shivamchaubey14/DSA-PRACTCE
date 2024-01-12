#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<stdbool.h>

struct node
{
    int data;
    int key;
    struct node *next;
    struct node *prev;
};

// This link always point to first Link

struct node *head = NULL;

// This link always point to last Link

struct node *last = NULL;
struct node *current = NULL;

// if list is empty

bool isEmpty() {
    return head == NULL;
}

// Displaying the doubly linked list
void printLists(){

    struct node *ptr = head;

    while(ptr != NULL){
        printf("(%d, %d)", ptr->key, ptr->data);
        ptr = ptr->next;
    }
}

void insertFirst(int key, int data){
    struct node *link = (struct node*) malloc (sizeof(struct node));
    link -> key = key;
    link -> data = data;

    if(isEmpty()){
        last = link;
    }else {
        head -> prev = link;
    }
    link -> next = head;

    head = link;
}

void main() {
    insertFirst(1,10);
    insertFirst(2,20);
    insertFirst(3,30);
    printf("\n Doubly Linked List:");
    printLists();
}