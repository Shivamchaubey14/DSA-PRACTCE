//sort the array in the wave form

#include<stdio.h>

void sortInWave(int array[], int numberOfElements){
    //firstly sort the input array
    Sort(array, numberOfElements);
    //Swap the adjacent elements 

    for(int index = 0; index<numberOfElements - 1; index+= 2){
        swap(&array[index], &array[index + 1]);
    }
}

void Sort(int array[], int numberOfElements){
    int i, j;
    for(i = 0; i<numberOfElements-1;i++)
        for(j = 0; j<numberOfElements - i - 1; j++)
            if(array[j] > array[j+1]){
                swap(&array[j], &array[j+1]);
            }
}
void swap(int *x, int *y){
    int temp = *x;
    *x = *y;
    *y = temp;
}

int main() {
    int array[] = {10, 90, 49, 2, 1, 5, 23};
    int numberOfElements = sizeof(array)/sizeof(array[0]);
    sortInWave(array, numberOfElements);
    for(int index = 0; index<numberOfElements; index++){
        printf("%d", array[index]);
    }
    return 0;
}