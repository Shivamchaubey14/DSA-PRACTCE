/*

array[5] = {1,2,4,5}

index 0 = 1
index 1 = 2
index 2 = 4
index 3 = 5


now i want to insert the value 3 before 2 index
*/

#include<stdio.h>
#define MAX 5

void main() {
    int array[MAX] = {1,2,4,5};
    int numberOfElements = 4;
    int loopvar = 0;
    int beforeindex = 3;
    int value = 3;
    
    printf("Value before insertion\n");
    for(loopvar=0;loopvar<numberOfElements;loopvar++){
        printf("array[%d] = %d\n", loopvar, array[loopvar]);
    }
    //now we have to shift the element right 
    for(loopvar=numberOfElements-1; loopvar>=beforeindex-1; loopvar--){
        array[loopvar+1] = array[loopvar];
    }
    array[beforeindex-1] = value;
    numberOfElements++;
    printf("array after insertion\n");
    for(loopvar=0; loopvar<numberOfElements; loopvar++){
        printf("array[%d] = %d\n", loopvar, array[loopvar]);
    }
}