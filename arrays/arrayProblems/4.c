//Recursive Binary Search algo

#include<stdio.h>

int binarySearch(int array[], int left, int right, int elementToBeSearched){
    if(left<=right){
        int middle = (left + right)/2;
        if(array[middle] == elementToBeSearched) {
            return middle;
        }
        if(array[middle]>elementToBeSearched){
            return binarySearch(array, left, middle -1, elementToBeSearched)
        }
        else {
            return binarySearch(array, middle + 1, right, elementToBeSearched);
        }
    }
    return -1
}

void main() {
    int array = {1,2,3,4,5,6,7,8,9,10};
    int elementToBeSearched = 10;
    int numberOfElements = sizeof(array)/sizeof(array[0]);
    int result = binarySearch(array, 0, numberOfElements-1, elementToBeSearched);
    if(result == -1){
        printf("Element is not present in an array");
    }
    else {
        printf("element is present at index %d",result);
    }
}