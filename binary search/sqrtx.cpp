#include<iostream>
using namespace std;

long long int sqrtInt(int n){
    
    int s = 0;
    int e = n;
    
    long long int mid = s+(e-s)/2;

    
    while(s<=e){
        
        if(mid*mid == n)
            return mid;
        
        else if(mid*mid>n){
            e = mid -1;
        }
        
        else {
            
            s = mid+1;
        }
        
        mid = s+(e-s)/2;
    }
        
    return e;
} 

double morePrecision(int n,int precision,int tempSol){
    double factor = 1;
    double ans = tempSol;

    for(int i = 0;i<precision;i++){
        factor /=10;
        for(double j = ans;j*j<n;j+=factor){
            ans = j;
        }
    }
    return ans;    
}

int main()
{
    int n;
    cout<<"Enter the number: ";
    cin>>n;

    int tempSol = sqrtInt(n);
    cout<<"Answer: "<<morePrecision(n,3,tempSol);
    return 0;
}