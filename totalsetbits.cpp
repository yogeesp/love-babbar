#include<iostream>
using namespace std;

int totalSetBits(int i,int j){

    int count = 0;

    while(i>0){
        if (i&1){
            count++;
        }
        i>>=1;
    }

    while(j>0){

        if (j&1){
            count++;
        }
        j>>=1;        
    }
    return count;
}


int main()
{
    int a,b;
    cout<<"Enter two numbers: ";
    cin>>a>>b;

    cout<< totalSetBits(a,b);
    return 0;
}