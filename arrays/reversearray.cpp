#include<iostream>
using namespace std;

void reverseArray(int arr[],int n){


    int start = 0;
    int end = n-1;

    while(start<=end){

        swap(arr[start],arr[end]);
        start++;
        end--;
    }

}


int main()
{   int size;
    int arr[15];

    cout<<"Enter size of array ";
    cin>>size;

    cout<<"Enter elements ";
    for(int i=0;i<size;i++){

        cin>>arr[i];
    }
    reverseArray(arr,size);

    for (int i=0;i<size;i++){

        cout<<arr[i]<<" ";
    }
    return 0;
}