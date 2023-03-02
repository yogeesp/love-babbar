#include <bits/stdc++.h> 
using namespace std;

void reverseArray(vector<int> &arr , int m)
{
    int i=m+1,s=arr.size()-1;
    while (i<=s){
        swap(arr.at(i),arr.at(s));
        i++;
        s--;
    }
}


int main(){
    int t;
    cin>>t;

    while(t!=0){
        int size,m;
        cin>>size>>m;
        
        vector<int> v(size);
       
        for(int i=0;i<size;i++){
            cin>>v[i];     
        }
        
        reverseArray(v,m);

        for(int i=0;i<size;i++){
            cout<<v[i]<<" ";     
        }

        t--;
    }
    return 0;
}
