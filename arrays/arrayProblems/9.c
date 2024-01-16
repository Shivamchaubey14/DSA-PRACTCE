//C program to print all possible subarray for given array using recursion

#include<stdio.h>

void totalSubarray(int array[], int start, int end, int numberOfElements){
    //if the end pointer reaches at end then stop
    if(end == numberOfElements) {
        return;
    }
    else if(start > end){
        totalSubarray(array, 0, end+1, numberOfElements);
    }
    //Print the subarray and increment the starting point
    else {
        printf("[");
        for(int index = start; index < end; index ++ ){
            printf("%d", array[index]);
        }
        printf("%d]\n", array[end]);
        totalSubarray(array, start + 1, end, numberOfElements);
    }

}

int main() {
    int array[] = {1,2,3};
    int numberOfElements = sizeof(array)/sizeof(array[0]);
    totalSubarray(array, 0, 0, numberOfElements);
    return 0;
}