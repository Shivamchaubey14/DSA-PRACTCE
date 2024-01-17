// move all the zero at the end of array

#include<stdio.h>

void pushZerosToEnd(int array[], int numberOfElements){
    int count = {0}; //for counting all the non zero elements
    for (int index = 0; index < numberOfElements; index++)
    {
        if(array[index] != 0){
            array[count++] = array[index];
        }
    }
    while (count < numberOfElements)
    {
        array[count++] = 0;
    }
    
    
}

int main() {
    int array[] = {1, 9, 8, 4, 0, 0, 2, 7, 0, 6, 0, 9};
    int numberOfElements = sizeof(array) / sizeof(array[0]);
    pushZerosToEnd(array, numberOfElements);
    //after pushing all the zero at the end.
    
    for(int i = 0; i<numberOfElements; i++){
        printf("%d, ", array[i]);
    }

}