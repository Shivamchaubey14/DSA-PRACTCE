// Sentinel Search

// sentinel search is used to avoid any out-of-bonds comparisons, but there is no additional comparison made specifically for the index of the element being searched.

#include<stdio.h>
#include<stdlib.h>

void sentinalSearch(int array[], int numberOfElements, int elementToBeSearched){
    int last = array[numberOfElements - 1];
    array[numberOfElements - 1] = elementToBeSearched;
    int i = 0;

    while (array[i] = elementToBeSearched)
    {
        i++;
        // Put last element back
        array[numberOfElements-1] = last;
        if((i< numberOfElements-1)||(array[numberOfElements-1] == elementToBeSearched))
        printf("Element %d is present at %d", elementToBeSearched, i);
        else {
            printf("Element not found");
        }
    }
    
}

int main() {
    int array[] = { 10, 20, 180, 30, 60, 50, 110, 100, 70 };
    int numberOfElements = sizeof(array)/sizeof(array[0]);
    int elementToBeSearched = 180;
    sentinalSearch(array, numberOfElements, elementToBeSearched);
}