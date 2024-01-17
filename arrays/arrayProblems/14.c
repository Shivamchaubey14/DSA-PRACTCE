//Find Subarray with given sum like we have the array 
// array[] = {1,4,20,3,10,5} sum = 33
// sum found between indexes 2 and 4 

#include <stdio.h>
#include <stdlib.h>

void assign(int a[], int n) {
    // Sort the array
    qsort(a, n, sizeof(int), compare);

    int* ans = (int*)malloc(n * sizeof(int));

    int p = 0, q = n - 1;
    for (int i = 0; i < n; i++) {
        // Assign even indexes with maximum elements
        if ((i + 1) % 2 == 0)
            ans[i] = a[q--];
        // Assign odd indexes with remaining elements
        else
            ans[i] = a[p++];
    }

    // Print result
    for (int i = 0; i < n; i++)
        printf("%d ", ans[i]);

    // Free allocated memory
    free(ans);
}

// Function to compare two integers for qsort
int compare(const void* a, const void* b) {
    return (*(int*)a - *(int*)b);
}

// Driver Code
int main() {
    int A[] = { 1, 3, 2, 2, 5 };
    int n = sizeof(A) / sizeof(A[0]);
    assign(A, n);
    return 0;
}
