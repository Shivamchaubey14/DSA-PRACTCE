//Binary search

#include<stdio.h>

int binarySearch(int array[], int left, int right, int elementToBeSearched){
    while (left<=right)
    {
        int middle = (left+right)/2;
        // if elementTobeSearched is present in the middle so return the middle index
        if(array[middle] == elementToBeSearched){
            return middle;
        }
        // If element to be searched is greater, ignore left half.
        if (array[middle]< elementToBeSearched)
        {
            left = middle + 1;
        }
        // If element to be searched is smaller, ignore right half
        else {
            right = middle -1;
        }
        
    }
    return -1;
    
}

void main() {
    int array = [1,2,3,4,5,6,7,8,9,10];
    int elementToBeSearched = 10;
    int numberOfElements = sizeof(array)/sizeof(array[0]);
    int result = binarySearch(array, 0, numberOfElements-1, elementToBeSearched);
    if (result == -1){
        printf("Elements is not present in the array");
    } else {
        printf("Element is present at index %d",result);
    }
}