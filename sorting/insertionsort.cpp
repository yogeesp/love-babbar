#include<iostream>
using namespace std;

void insertionSort(int arr[], int n)
{
    int i, temp, j;
    for (i = 1; i < n; i++)
    {
        temp = arr[i];
        j = i - 1;
 
        while (j >= 0 && arr[j] > temp)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = temp;
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

    insertionSort(arr,size);

    cout<<"Sorted array: ";
    for(int i=0; i<size; i++) {
        cout<<arr[i]<<" ";
    }

    return 0;
}