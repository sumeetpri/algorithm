#include<iostream>
#include <cstdlib>
using namespace std;

void printArray(int a[], int _size) {
    for(int i=0; i<_size; i++) {
        std::cout<<a[i]<<"\t";
    }
}

void mergeArray(int left[], int right[], int a[] ) {

}

void mergeSort(int a[], int _size) {
    if(_size <2) {
        return;
    }

    int mid = _size/2;

    // Create Array
    int left[mid];
    int right[_size-mid];

    //Copy Array
    for(int i=0; i<mid; i++) {
        left[i] = a[i];
    }
    for(int j=mid; j<_size; j++) {
        right[_size-j] = a[j];
    }

    //Merger sort left
    mergeSort(left,mid);
    mergeSort(right,_size-mid);

    // Final merge
    mergeArray(left,right, a);
}


int main() {
    int arr[] = {12,11,13,5,6};
    int _size = (sizeof(arr)/sizeof(int));

    std::cout<<" Given Array is "<<endl;
    printArray(arr,_size);

    // Merge Sort

    return 0;
}
