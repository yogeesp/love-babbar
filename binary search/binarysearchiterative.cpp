#include<iostream>
using namespace std;

int binarySearch(int arr[],int start,int end,int key){

 while (end >= start) {

    int mid = start+(end-start)/2;

    if (arr[mid]==key)
        
        return mid;

    if (key>arr[mid])
        
        start=mid+1;

    if (key<arr[mid])
        
        end=mid-1;

    }             
    return -1;

}
int main()
{
    int even[6]={2,3,4,5,6,8};
    int odd[5]={5,6,7,8,10};

    int result = binarySearch(even,0,5,6);

    if (result == -1)
        cout<<"Not found";
    else
        cout<<"Element is found at index "<<result;   
    
    return 0;
}