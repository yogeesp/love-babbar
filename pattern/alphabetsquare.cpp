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
            cout<<char(character+j-1)<<" ";
            j++;
        }
        cout<<endl;
        i++;

    }

    return 0;
}