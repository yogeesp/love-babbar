#include<iostream>
using namespace std;

void bubbleSort(int arr[],int size){

    for (int i=0;i<size-1;i++){

        bool swapped=false;

        for(int j=0;j<size-i-1;j++){
            if (arr[j]>arr[j+1])

                swap(arr[j],arr[j+1]);
                swapped=true;

        }
        if (swapped ==false)
            //already sorted
            break;
    }
}

int main()
{
    int size;
    cout<<"Enter size of the array: ";
    cin>>size;

    int arr[size];
    cout<<"Enter elements: ";
    for (int i=0;i<size;i++){
        cin>>arr[i];
    }

    bubbleSort(arr,size);

    cout<<"Sorted array: ";
    for(int i=0; i<size; i++) {
        cout<<arr[i]<<" ";
    }

    return 0;
}