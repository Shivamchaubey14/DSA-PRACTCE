// Searching in Array
/* There are two types of search in the array which is sequential search and binary search*/

// Linear search 

#include<stdio.h>

int search(int arr[], int numberOfElements, int element);

void main(){
    int arr[] = {2,3,4,10,40};
    int element = 10;
    int numberOfElements = sizeof(arr)/sizeof(arr[0]);
    int result = search(arr, numberOfElements, element);
    (result == -1) ? printf("Elements is not present in array"):printf("Element is present at index %d",result);
}

int search(int arr[], int numberOfElements, int element){
    for(int i = 0; i<numberOfElements; i++){
        if(arr[i] == element){
            return i;
        }
    
    }
    return -1;
}