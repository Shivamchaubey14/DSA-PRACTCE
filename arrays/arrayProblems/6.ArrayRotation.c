//Implementing rotation in an array

// Suppose we have the array arr = [1,2,3,4,5,6] and number of rotation we have to make is 2 

// means in first rotation the array will be [2,3,4,5,6,1] and in second rotation [3,4,5,6,1,2] 

#include<stdio.h>

void rotateArray(int array[], int numberOfRotation, int sizeOfArray){
        int key = 1;
        while (key<=numberOfRotation)
        {
            int last = array[0];
            for(int i = 0; i < sizeOfArray; i++){
                array[i] = array[i+1];
            }
            array[sizeOfArray - 1] = last;
            key++;
        }
}

void main(){
    int array[] = {1,2,3,4,5,6};
    int sizeOfArray = sizeof(array)/sizeof(array[0]);
    int numberOfRotation = 2;
    rotateArray(array, numberOfRotation, sizeOfArray);
    for(int i = 0; i<sizeOfArray;i++){
        printf("%d",array[i]);
    }
}