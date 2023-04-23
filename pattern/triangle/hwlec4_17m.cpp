/* print pattern like
1
23
345
4567
56789 */

#include<iostream>
using namespace std;
 
int main()
{
    int n;
    cin>>>n;

    int row=1;

    while(row<=n){
        int j=n;
        while (j<2n)
         cout<<j;
         j++;
    }


    return 0;
}