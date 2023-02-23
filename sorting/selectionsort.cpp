#include<iostream>
using namespace std;

void selectionSort(int arr[], int size) {

    for(int i=0;i<size;i++){
        int minIndex = i;
        
        for(int j=i+1;j<size-1;j++){

            if (arr[j]<arr[minIndex])

                minIndex=j;
        }
        swap(arr[minIndex],arr[i]);
    }
}

int main() {
    int size;
    cout<<"Enter the size of the array: ";
    cin>>size;

    int arr[size];

    cout<<"Enter the elements of the array: ";
    for(int i=0; i<size; i++) {
        cin>>arr[i];
    }

    selectionSort(arr, size);

    cout<<"Sorted array: ";
    for(int i=0; i<size; i++) {
        cout<<arr[i]<<" ";
    }
    return 0;
}
