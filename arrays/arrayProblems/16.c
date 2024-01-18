// Segregating the even odd elemetns of an array

#include <stdio.h>

// Function to segregate even odd numbers
void arrayEvenAndOdd(int arr[], int size)
{
    int i = -1, j = 0;
    int pivot = arr[size - 1];
    for (j = 0; j < size - 1; j++) {
        if (arr[j] % 2 == 0) {
            i++;

            // Swapping even and odd numbers
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }

    int temp = arr[i + 1];
    arr[i + 1] = arr[size - 1];
    arr[size - 1] = temp;
}

// Driver code
int main()
{
    int arr[] = { 7, 2, 9, 4, 6, 1, 3, 8, 5 };
    int size = sizeof(arr) / sizeof(arr[0]);

    // Function Call
    arrayEvenAndOdd(arr, size);

    // Print the updated array
    printf("Updated Array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
