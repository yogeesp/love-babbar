#include<iostream>
using namespace std;
 
int factorial(int n){
    int fact =1;
    for(int i=1;i<=n;i++){
        fact *=i;
    }
    return fact;

}
int ncr (int n,int r){
    int num=factorial(n);
    int denom=(factorial(r)*factorial(n-r));

    return num/denom;
 }
int main()
{
    int n,r;
    cout<<"Enter n and r:";
    cin>>n>>r;
    cout<<ncr(n,r);
    return 0;
}