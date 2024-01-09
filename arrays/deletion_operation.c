// deletion operation 

#include<stdio.h>

void main(){
    int array[] = {1,3,5,7,8};
    int elementToBeDeleted = 5;
    int numberOfElements = 5;
    int indexatwhichelementpresent = 3;
    int i,j;
    printf("The original array is\n");
    for(i=0; i<numberOfElements;i++){
        printf("array[%d] = %d\n", i, array[i]);
    }
    j = indexatwhichelementpresent;
    while(j<numberOfElements){
        array[j-1] = array[j];
        j = j+1;
    }
    numberOfElements = numberOfElements-1;
    printf("Array after deletion\n");
    
    for(i = 0; i<numberOfElements; i++){
        printf("array[%d] = %d\n", i, array[i]);
    }
}