// Search, insert and delete in an Unsorted Array

#include<iostream>
using namespace std;
int findElement(int array[], int numberOfElements, int elementToBeFind) {
    int index;
    for(index = 0; index<numberOfElements; index++){
        if(array[index] == elementToBeFind){
            return index;
        }
    }
    return -1;
}

int main(){
    int array[] = {12,34,10,6,40};
    int numberOfElements = sizeof(array)/sizeof(array[0]);
    int elementToBeFind = 40;

    int position = findElement(array, numberOfElements, elementToBeFind);
    if(position == -1){
        cout<<"Element not found";

    } else {
        cout<<"element found at location "<<position + 1<<endl;
    }
}