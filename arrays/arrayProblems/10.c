// C program to find the three largest element in an array

#include <limits.h>
#include <stdio.h>

void printThreeLargest(int array[], int numberOfElements) {
    int index, first, second, third;
    if (numberOfElements < 3) {
        printf("Invalid Input\n");
        return;
    }
    first = second = third = INT_MIN;
    for (index = 0; index < numberOfElements; index++) {
        if (array[index] > first) {
            third = second;
            second = first;
            first = array[index];
        } else if (array[index] > second) {
            third = second;
            second = array[index];
        } else if (array[index] > third) {
            third = array[index];
        }
    }
    printf("Three largest elements are %d %d %d\n", first, second, third);
}

int main() {
    int array[] = {12, 13, 1, 10, 34, 1};
    int numberOfElements = sizeof(array) / sizeof(array[0]);
    printThreeLargest(array, numberOfElements);
    return 0;
}
