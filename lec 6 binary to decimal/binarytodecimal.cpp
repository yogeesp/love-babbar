#include<iostream>
#include<cmath>
using namespace std;
 
int main()
{
    long long int n;
    cin>>n;
    int i = 0, j = 0;
    
    while(n>0){
        int digit = n%10;
        j += pow(2,i)*digit;
        i++;
        n/=10; 
    }
    cout<<j;
    return 0;
}