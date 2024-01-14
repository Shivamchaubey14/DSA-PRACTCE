// Ternary Search

#include<stdio.h>

int ternarySearch(int array, int left, int right, int elementToBeSearched,){
    if(right >= left){
        int firstMiddle = left + (right - 1)/3;
        int secondMiddle = right + (right - left)/3;
        if(array[firstMiddle] == elementToBeSearched){
            return firstMiddle;
        }
        if(array[secondMiddle] == elementToBeSearched){
            return secondMiddle;
        }
        // Since key is not present at mid, Check in which region it is present then repeat the search operation in that region.
        if(key<array[firstMiddle]){

            //if the element to be searched is found between left and firstMiddle
            return ternarySearch(left, firstMiddle - 1, elementToBeSearched, array);
        }
        else if(elementToBeSearched > array[secondMiddle]){
            //If the element to be found is in between the the secondMiddle and right
            return ternarySearch(secondMiddle+1, right, elementToBeSearched, array);
        }
        else {

            // If the element lies between the fistmiddle and second middle 
            return ternarySearch(firstMiddle + 1, secondMiddle - 1, elementToBeSearched, array);
        }
    }
    return -1;
}

void main() {
    int left, right, result, elementToBeSearched;

    int array = [1,2,3,4,5,6,7,8,9,10];
    left = 0;
    right = 9;
    elementToBeSearched = 5;
    result = ternarySearch(array, left, right, elementToBeSearched);
    if(result == -1){
        printf("The element is not found");
    }
    else {
        printf("The element is found at index %d", result);
    }
}