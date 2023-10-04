#include<iostream>
using namespace std;
 
int main()
{   
    int arr[] = {1,1,0, 0 ,0 ,1 ,0};
    int n = 7;
    int i =0,j = n-1;

    while(i<j){

        if(arr[i]==0){
            i++;
        }

        if(arr[j]==1){
            j--;
        }

        if(arr[i]==1 & arr[j]==0){

            swap(arr[i],arr[j]);
            i++,j--;
        }

    }

    for (int k=0;k<n;k++){

        cout<<arr[k]<<" ";
    }
    return 0;
}