#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<stdbool.h>

struct node {
    int data;
    int key;
    struct node *next;
    struct node *prev;
};

struct node *head = NULL;
struct node *last = NULL;
struct node *current = NULL;

//To check if list is empty 

bool isEmpty() {
    return head = NULL;
}

// Display the linked-list in the form of first to Last

void displayForward() {
    struct node *ptr = head;
    while(ptr != NULL){
        printf("(%d, %d)", ptr->key, ptr->data);
        ptr = ptr->next;
    }
}

// display the list from last to fist

void displayBackward() {
    struct node *ptr = last;
    while (ptr != NULL)
    {
        printf("(%d, %d)", ptr->key, ptr->data);

        // move to next item

        ptr = ptr->prev;
    }
    
}

// Inserting the linked list at first first place

void insertFirst(int key, int data) {
    struct node *link = (struct node*) malloc(sizeof(struct node));
    link -> key = key;
    link -> data = data;
    if(isEmpty()) {
        // make it to the last link
        last = link;
    } else {
        // update first prev link
        head -> prev = link;
    }
    // point it to old first link
    link -> next = head;
    // point first to new fist link
    head = link;
}

// insert link at the last location

void insertLast(int key, int data) {
    struct node *link = (struct node*) malloc(sizeof(struct node));
    link->key = key;
    link->data = data;
    if(isEmpty()){
        last = link
    } else {
        last -> next = link;
        link->prev = last;
    }
    last = link;
}

// delete first item

struct node *deleteFirst() {
    // a reference to first link
    struct node *tempLink = head;

    // If only one link
    if(head->next == NULL){
        last = NULL;
    } else {
        head->next->prev = NULL;
   }
   head = head->next;

   //return the deleted link
   return tempLink;
}

//delete link at the last location
struct node* deleteLast(){

   //save reference to last link
   struct node *tempLink = last;

   //if only one link
   if(head->next == NULL) {
      head = NULL;
   } else {
      last->prev->next = NULL;
   }
   last = last->prev;

   //return the deleted link
   return tempLink;
}

//delete a link with given key
struct node* delete(int key){

   //start from the first link
   struct node* current = head;
   struct node* previous = NULL;

   //if list is empty
   if(head == NULL) {
      return NULL;
   }

   //navigate through list
   while(current->key != key) {

      //if it is last node
      if(current->next == NULL) {
         return NULL;
      } else {

         //store reference to current link
         previous = current;

         //move to next link
         current = current->next;
      }
   }

   //found a match, update the link
   if(current == head) {

      //change first to point to next link
      head = head->next;
   } else {

      //bypass the current link
      current->prev->next = current->next;
   }
   if(current == last) {

      //change last to point to prev link
      last = current->prev;
   } else {
      current->next->prev = current->prev;
   }
   return current;
}
bool insertAfter(int key, int newKey, int data){

   //start from the first link
   struct node *current = head;

   //if list is empty
   if(head == NULL) {
      return false;
   }

   //navigate through list
   while(current->key != key) {

      //if it is last node
      if(current->next == NULL) {
         return false;
      } else {

         //move to next link
         current = current->next;
      }
   }

   //create a link
   struct node *newLink = (struct node*) malloc(sizeof(struct node));
   newLink->key = key;
   newLink->data = data;
   if(current == last) {
      newLink->next = NULL;
      last = newLink;
   } else {
      newLink->next = current->next;
      current->next->prev = newLink;
   }
   newLink->prev = current;
   current->next = newLink;
   return true;
}
int main(){
   insertFirst(1,10);
   insertFirst(2,20);
   insertFirst(3,30);
   insertFirst(4,1);
   insertFirst(5,40);
   insertFirst(6,56);
   printf("\nList (First to Last): ");
   displayForward();
   printf("\n");
   printf("\nList (Last to first): ");
   displayBackward();
   printf("\nList , after deleting first record: ");
   deleteFirst();
   displayForward();
   printf("\nList , after deleting last record: ");
   deleteLast();
   displayForward();
   printf("\nList , insert after key(4) : ");
   insertAfter(4,7, 13);
   displayForward();
   printf("\nList , after delete key(4) : ");
   delete(4);
   displayForward();
}