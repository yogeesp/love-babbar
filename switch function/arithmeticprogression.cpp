#include<iostream>
using namespace std;

int ap(int n){

    return 3*n+7;

}
 
int main()
{
    int n;
    cout<<"Enter nth term: ";
    cin>>n;

    cout<<ap(n);
    return 0;
}