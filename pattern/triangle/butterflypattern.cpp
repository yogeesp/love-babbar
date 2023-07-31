/* 
*                 *
* *             * *
* * *         * * * 
* * * *     * * * *
* * * * * * * * * *
* * * *     * * * * 
* * *         * * *
* *             * * 
*                 * 
*/


#include <iostream>
using namespace std;

int main() {

    int n;
    cin>>n;
    
    int count = 1;  
    
    for(int  i =1;i<=2*n-1;i++){

        if (i<n+1){ 
            
            for (int star = 1;star<=i;star++){
                cout<<"*"<<" ";
            }            
            
            for (int space = 1;space<=4*(n-i);space++){
                cout<<" ";
            } 
            for(int j =1; j<=i;j++){
            
                cout<<"*"<<" ";

            }
        
            cout<<endl;
    
        }
        else{
            
            for (int star = 1;star<=2*n-i;star++){
                cout<<"*"<<" ";
            }            
            for (int space = 1;space<=4*(i-n);space++){
                cout<<" ";
            }            
            for(int j =1; j<=2*n-i;j++){
            
                cout<<"*"<<" ";

            }
        
            cout<<endl;   

        }

    }

    return 0;
}