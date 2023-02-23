#include<iostream>
using namespace std;
 
int main()
{
    int n;
    cin>>n;

    int i=1;
    char cha='A';
    while(i<=n){
        int j=1;
        while(j<=i){
            cout<<cha<<" ";
            cha++;
            j++;
        }
        cout<<endl;
        i++;
    }
    return 0;
}