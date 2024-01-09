#include <stdio.h>

int main()
{
    int array[] = {1,3,5,7,8};
    int totalNumberOfElement = 5;
    int position = 3;
    int item = 10;
    int i, j;
    printf("The original array elements are:\n");
    
    for(i=0; i<totalNumberOfElement; i++){
        printf("array[%d] = %d\n", i, array[i]);
    }
    array[position-1] = item;
    printf("The array elements after updation:\n");
    
    for(i=0; i<totalNumberOfElement;i++){
        printf("array[%d] = %d\n", i, array[i]);
    }
    
}
