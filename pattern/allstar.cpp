/* * * * * *
* * * * *
* * * * *
* * * * *
* * * * * */
#include<iostream>
using namespace std;
 
int main()
{
    int n,i=0;
    cin>>n;
    while(i<n){
        for(int j=0;j<n;j++){
            cout<<"* ";
        }
        cout<<"\n";
        i++;
    }
    return 0;
}