#include<iostream>
using namespace std;
 
int main()
{
    int n;
    cin>>n;

    int i=1;
    char cha = 65;
    while(i<=n){
        int j=1;

        while(j<=i){
            cout<<cha<<" ";
            j++;
        }
        cout<<endl;
        cha++;
        i++;
    }
    return 0;
}