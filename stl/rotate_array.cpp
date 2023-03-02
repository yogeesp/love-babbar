#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
 
int main()
{
    vector<int> v;

    v.push_back(1);
    v.push_back(3);
    v.push_back(6);
    v.push_back(7);

    rotate(v.begin(),v.begin()+1,v.end());

    for(int i:v){
        cout<<i<<" ";       
    }cout<<endl;

 //sorting basede on intrasort(combination of heap sort,quick sort,insertion sort)
    sort(v.begin(),v.end());

    for(int i:v){
        cout<<i<<" ";       
    }
    return 0;
}