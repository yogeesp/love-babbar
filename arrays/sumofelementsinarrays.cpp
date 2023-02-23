#include<iostream>
using namespace std;
 
int calculateSum(int arr[],int n){
    int sum=0;
    for (int i=0;i<n;i++){
        sum+=arr[i];
    }

    return sum;
}


int main()

{   int n;
    int arr[100];
    cout<<"Enter size of array: ";
    cin>>n;
    cout<<"Enter elements ";
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Sum is "<<calculateSum(arr,n);
    return 0;
}