#include<iostream>
using namespace std;

void swapAlterante(int arr[],int n){

    int i = 0,j=i+1;

    for(int i =0;i<n;i+=2){
        
        if(i+1<n){
            swap(arr[i],arr[i+1]);
        }

    }
    // if(n%2==0){    
    //     while(j!=n+1){
    //         swap(arr[i],arr[j]);
    //         i+=2;
    //         j+=2;
    //     }
    // }
    // else while(j!=n-2){
    //         swap(arr[i],arr[j]);
    //         i+=2;
    //         j+=2;
    //     }

}
 
int main()
{   int arr[] = {1,2,3,4,5};
    int n = 5;

    swapAlterante(arr,n);

    for(int i = 0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}