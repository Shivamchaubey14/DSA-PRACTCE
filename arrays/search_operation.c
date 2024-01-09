/*
We can perform a search for an array element based on its value or its index.
*/

#include <stdio.h>

int main()
{
    int array[] = {1,3,5,7,8};
    int totalElement = 5;
    int i = 0, j = 0;
    int numberToBeFound = 5;
    printf("The original array elements are:\n");
    for(i=0; i<5; i++){
        printf("array[%d] = %d", i, array[i]);
    }
    while(j<totalElement){
        if(array[j] == numberToBeFound){
            break;
        }
        j = j+1;
    }
    printf("Found element %d at position %d", numberToBeFound, j+1);
    return 0;
}
