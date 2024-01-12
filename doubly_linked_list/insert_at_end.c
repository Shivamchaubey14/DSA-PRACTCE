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

// this link always point to the first link

struct node *head = NULL;
struct node *last = NULL;
struct node *current = NULL;

bool isEmpty() {
    return head == NULL;
}

// To printing the doubly linked List

void printList() {
    struct node *ptr = head;
    while (ptr!=NULL)
    {
        printf("(%d, %d)", ptr->key, ptr->data);
        ptr = ptr->next;
    }
    
}

// Insert node or link at the last position

void insertLast(int key, int data){
    struct node *link = (struct node*) malloc(sizeof(struct node));
    link -> key = key;
    link -> data = data;
    if(isEmpty()){
        last = link;
    } else {
        last -> next = link;
        link -> prev = last;
    }

    last = link;
}

void main() {
    insertLast(1,10);
    insertLast(2,20);
    insertLast(3,30);
    printf("\n Doubly Linked List: ");
    printList();
}