#include<iostream>
using namespace std;
 
int main()
{
    int n;
    cin>>n;
    
    int i=1;
    while(i<=n){
        int j=1;
        while(j<=n-i+1){
            cout<<j<<" ";
            j++;
        }
        int k=2*(i-1);
        while(k){
            cout<<" * ";
            k--;
        }


        int h=n-i+1;
        while(h){
            cout<<h<<" ";
            h--;
        }
        cout<<endl;
        i++;
    }


    return 0;
}
