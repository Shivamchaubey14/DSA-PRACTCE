//insertion at given index

#include<stdio.h>
#define MAX 5

void main() {
    int array[MAX] = {1,2,4,5};
    int totalNumberOfElement = 4 ;//Total number of elements in array 
    int looVar = 0; //loopVar
    int UserGivenIndex = 2;//we have to insert 3 at index 2 
    int valueToBeInserted = 3;
    printf("Printing array before insertion \n");
    for(looVar; looVar<totalNumberOfElement; looVar++){
        printf("array[%d] = %d", looVar, array[looVar]);
    }

    // the index is 2 and the value to insert over there is 3

    // now shift rest of element to right side so that space could be 

    for(looVar = totalNumberOfElement - 1; looVar >= UserGivenIndex; looVar--){
        array[looVar + 1] = array[looVar];
    }

    array[UserGivenIndex] = valueToBeInserted;
    totalNumberOfElement++;

    //array after insertion 

    printf("Array after insertion");
    for(looVar=0; looVar<totalNumberOfElement; looVar++){
        printf("array[%d]=%d\n", looVar, array[looVar]);
    }
}