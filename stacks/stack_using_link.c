#include<stdio.h>
#include<stdlib.h>
void push();
void pop();
void display();

struct node {
    int data;
    struct node *next;
};
struct node *head;

void main() {
    int choice = 0;
    printf("\nStack Implementation..\n");
    while (choice != 4)
    {
        printf("\n Choose one from the options..\n");
        printf("\n1.Push\n2.Pop\n3.Show\n4.Exit");
        printf("\nEnter your choice\n");
        scanf("%d",&choice);
        switch (choice)
        {
        case 1:
            {
            push();
            break;
            }
        case 2:
        {
            pop();
            break;
        }
        case 3:
        {
            display();
            break;
        }
        case 4:
        {
            printf("Exiting...");
            break;
        }
        default:
        {
            printf("please enter valid choice");
        }
        }
    }
    
}

void push() {
    int data;
    struct node *ptr = (struct node*)malloc(sizeof(struct node));
    if(ptr == NULL) {
        printf("Not able to push the element");
    }
    else {
        printf("Enter the value");
        scanf("%d",&data);
        if(head == NULL)
        {
            ptr ->data = data;
            ptr -> next = NULL;
            head = ptr;
        }
        else {
            ptr -> data = data;
            ptr -> next = head;
            head = ptr;
        }
        printf("Item Pushed");
    }
}

void pop() {
    int data;
    struct node *ptr;
    if(head == NULL) {
        printf("Underflow");
    }
    else {
        data = head ->data;
        ptr = head;
        head = head ->next;
        free(ptr);
        printf("Item Popped");
    }
}
void display() {
    int i;
    struct node *ptr;
    ptr = head;
    if(ptr == NULL){
        printf("Stack is empty\n");
    }
    else {
        printf("Printing Stack Elements");
        while (ptr!=NULL)
        {
            printf("%d\n", ptr->data);
            ptr = ptr->next;
        }
        
    }
}