#include<iostream>

using namespace std;

int insertSorted(int array[], int numberOfElements, int elementToBeInsert, int capacity){

}

int main() {
    int array[20] = {12, 16, 20, 40, 50, 70};
    int capacity = sizeof(array)/sizeof(array[0]);
    int numberOfElements = 6;
    int index, elementToBeInsert = 26;
    cout<<"Before insertion: "<<endl;
    for(index = 0; index<numberOfElements; index++){
        cout<<array[i]<<" ";
    }
    numberOfElements = insertSorted(array, numberOfElements, elementToBeInsert, capacity);
    cout<<"\n After Insertion";
    for(index = 0; index<numberOfElements;index++){
        cout<<array[index]<<" ";

    }
    return 0;
}