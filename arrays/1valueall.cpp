#include<iostream>
using namespace std;
 
int main()
{
    int array[100] = {-1};
    fill_n(array, 100, -1);

    for (int i=0;i<5;i++){
        cout<<array[i]<<" ";
    } 
    return 0;
}