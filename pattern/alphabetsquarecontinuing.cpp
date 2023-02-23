#include<iostream>
using namespace std;
 
int main()
{
    int n;
    cin>>n;

    char character=65;
    int i=1;
    while(i<=n){

        int j=1;
        while(j<=n){
            cout<<character<<" ";
            character++; 
            j++;
        }
        cout<<endl;
        i++;
    }
    return 0;
}