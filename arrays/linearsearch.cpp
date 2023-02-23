#include<iostream>
using namespace std;
 
bool search(int arr[],int size,int key){
    for (int i=0;i<10;i++){

        if (key==arr[i]);
            return 1;
    }
    return 0;

}
int main()
{
    int arr[10]= {3,4,5,8,9,11,2,7,10,18};
    int key;
    cout<<"Enter element to search";
    cin>>key;

    bool found= search(arr,10,key);

    if (found){
        cout<<"Element found";
    }
    else
        cout<<"Element not found.";
    return 0;
}