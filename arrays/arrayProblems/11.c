// C program to find the second largest element in an array

#include <limits.h>
#include <stdio.h>

void secondLargestElement(int array[], int numberOfElements) {
    if (numberOfElements < 2) {
        printf("Invalid Input: Array should have at least two elements\n");
        return;
    }

    int first, second;
    first = second = INT_MIN;

    for (int index = 0; index < numberOfElements; index++) {
        if (array[index] > first) {
            second = first;
            first = array[index];
        } else if (array[index] > second && array[index] != first) {
            second = array[index];
        }
    }

    if (second == INT_MIN) {
        printf("There is no second largest element in the array\n");
    } else {
        printf("The second largest element is %d\n", second);
    }
}

int main() {
    int array[] = {12, 13, 1, 10, 34, 1};
    int numberOfElements = sizeof(array) / sizeof(array[0]);
    secondLargestElement(array, numberOfElements);
    return 0;
}
