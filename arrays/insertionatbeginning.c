// The basic operations supported by an array are 
// Traverse
// Insertion 
// Deletion
// Search
// Update 

// Insertion operation
// Insertion at the beginning of an array 
// Insertion at given index of an array
// Insertion before the given index of an array 


// Insertion at the Beginning of an array

#include <stdio.h>
#define MAX 5
void main()
{
    int array[MAX] = {2,3,4,5};
    int N = 4; //number of element in an array 
    int i = 0; //loop variable 
    int value = 1; //new data element to be inserted in array
    
    //print array before insertion 
    printf("Printing array before insertion");
    for(i=0;i<4;i++){
        printf("array['%d'] = %d\n", i, array[i]);
    }
    //now shift rest of element downwards 
    
    for(i=N; i>=0; i--){
        array[i+1] = array[i];
    }
    // Now add element at the element at first position
    array[0] = value;
    N++;
    // print to confirm 
    printf("printing array after insertion");
    for(i=0;i<N;i++){
        printf("array[%d] = %d", i, array[i]);
    }
}

