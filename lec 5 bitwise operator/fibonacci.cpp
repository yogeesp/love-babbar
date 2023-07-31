#include<iostream>
using namespace std;
 
int main()
{
    int a = 0,b = 1;
    int n;
    cin>>n;

    cout<<a<<" "<<b<<" ";

    for(int i=0;i<n;i++){

        int nextNum = a+b;

        cout<<nextNum<<" ";
        a = b;
        b = nextNum;

    }
    return 0;
}