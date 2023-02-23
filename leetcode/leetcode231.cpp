#include<iostream>
#include<cmath>
using namespace std;

bool isPowerOfTwo(int n) {

    for(int i=0;i<n;i++){
        if (log2(n)==i){

            return 1;
            break;
        }
    }
    return 0;
}

int main()
{
    cout<<isPowerOfTwo(16);
    return 0;
}