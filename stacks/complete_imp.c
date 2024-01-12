#include<stdio.h>
int MAXSIZE = 8;
int STACK[8];
int top = -1;

// To check if stack is empty 

int isEmpty() {
    if(top == -1){
        return 1;
    }
    else {
        return 0;
    }
}

// To check if stack is full

int isFull(){
    if(top == MAXSIZE){
        return 1;
    } else {
        return 0;
    }
}
// Function to return the top most element in the stack
int peek(){
    return STACK[top];
}

// Function to delete from the stack

int pop(){
    int data;
    if(!isEmpty()){
        data = STACK[top];
        top = top-1;
        return data;
    }else {
        printf("Could not retrieve data, Stack is empty.\n");
    }
}

// Function to insert into the stack

int push(int data){
    if(!isFull()){
        top = top+1;
        STACK[top] = data;
    } else {
        printf("Could not insert data, Stack is full");
    }
}

int main() {
    push(10);
    push(20);
    push(30);
}