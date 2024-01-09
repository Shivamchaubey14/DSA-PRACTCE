#include <stdio.h>
#define MAX 5

int main() {
    
    int array[MAX] = {1,2,4,5};
    int numberOfElement = 4;
    int loopVar = 0;
    int afterThisIndex = 1;
    int value = 3;
    printf("Array before insertion \n");
    for(loopVar = 0; loopVar<numberOfElement; loopVar++){
        printf("array[%d]=%d \n", loopVar, array[loopVar]);
    }
    for(loopVar=numberOfElement-1;loopVar>=afterThisIndex; loopVar--){
        array[loopVar+1] = array[loopVar];
        }
    
    array[afterThisIndex+1] = value;
    numberOfElement++;
    for(loopVar = 0; loopVar<numberOfElement; loopVar++){
        printf("array[%d] = %d\n", loopVar, array[loopVar]);
    }
    return 0;
}
