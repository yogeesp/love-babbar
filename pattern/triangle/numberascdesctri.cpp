#include<iostream>
using namespace std;
 
int main()
{
    int n;
    cin>>n;
     
    int i=1;
    while(i<=n){

        int spaces=n-i;
        while(spaces){
            cout<<" ";
            spaces--;
        }
        int j=1;
        while (j<=i){
            cout<<j<<" ";
            j++;
        }
        int h=i-1;
        while (h){
            cout<<h<<" ";
            h--;
        }
        cout<<endl;
        i++;
    }
    return 0;
}