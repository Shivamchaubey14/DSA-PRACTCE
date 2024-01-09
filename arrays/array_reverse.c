#include <stdio.h>

int main() {
    int array[] = {1, 2, 3, 4, 5};
    int totalNumberOfElement = 5;

    // Print the array before reverse
    printf("The array before reverse\n");
    for (int i = 0; i < totalNumberOfElement; i++) {
        printf("array[%d] = %d ", i, array[i]);
    }

    // Reverse the array
    int i = 0, j = totalNumberOfElement - 1;
    int k = 0;
    while (i < j) {
        // Swap elements at positions i and j
        int temp = array[i];
        array[i] = array[j];
        array[j] = temp;

        // Move towards the center of the array
        i++;
        j--;

        // Move to the next element in the array
        k++;
    }

    // Print the elements after reverse
    printf("\nThe elements after reverse are\n");
    for (int i = 0; i < totalNumberOfElement; i++) {
        printf("array[%d] = %d\n", i, array[i]);
    }

    return 0;
}
