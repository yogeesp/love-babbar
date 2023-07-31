/* The complement of an integer is the integer you get when you flip all the 0's to 1's and all the 1's to 0's in its binary representation.

For example, The integer 5 is "101" in binary and its complement is "010" which is the integer 2.
Given an integer n, return its complement.
 */


/* class Solution {
public:

}; */
#include<iostream>
#include<bitset>
#include<math.h>
using namespace std;

int countDigit(long long n) {
    return floor(log10(n) + 1);
}
int bitwiseComplement(int n) {
    int ans=0;
    int i=0,h=0;
    int new1=0;
    int rever=0;
    while(n!=0){

        int bit= n&1;
        ans= (bit* pow(10,i)+ans);

        n=n>>1;
        i++;
    }
    int j;
    // for(j=0;j<countDigit(n);j++){

    // }
    int l=0;
    while(ans!=0){
        int digit=new1%10;
        int reverdigit=1-digit;
        rever=(reverdigit*pow(2,l)+rever);

        new1=new1<<1;
        l++;

    }

    return rever;
}

 
int main()
{
    int n;
    cin>>n;

    cout<< bitwiseComplement(n);

    return 0;
}