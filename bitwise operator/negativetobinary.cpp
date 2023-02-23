#include<iostream>
#include<math.h>
using namespace std;

int dectobinary(int n){
    int i=0;
    int ans=0;
    for (;i<31;i++){

        int bit= n & 1;

        ans=(bit* pow(10,i))+ans;

        n=n>>1;

    }
    return ans;
}
 
int main()
{
    int n;
    cout<<"Enter number ";
    cin>>n;

    cout<<dectobinary(n);

    return 0;
}