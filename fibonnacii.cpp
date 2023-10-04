#include<iostream>
using namespace std;

int fib(int n){
    int ans=0,j=1;
    for(int i=1;i<=n;i++){
        ans+=i;
    }
    return ans;
}
int main()
{
    int n;
    cin>>n;
    cout<<fib(n);
    return 0;
}