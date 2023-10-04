#include<iostream>
#include<cmath>
using namespace std;

bool prime(int n){
    for(int i=2;i<=sqrt(n);i++){
        if (n%i==0)
            return 0;
    }
    return 1;
}
int main()
{
    int n;
    cin>>n;
    if(prime(n))
        cout<<"Prime Number";
    else cout<<"Not a prime number";
    return 0;
}