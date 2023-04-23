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

    cout<<"Finding 6: "<<binary_search(v.begin(),v.end(),6)<<endl;
    //Index
    cout<<"Lower bound:"<<lower_bound(v.begin()+1,v.end(),6)-v.begin()<<endl;
    
    int a=3,b=5;

    cout<<"MAX "<<max(a,b)<<endl;

    cout<<"Min "<<min(a,b)<<endl;
    
    swap(a,b);
    cout<<"a: "<<a<<endl;
    cout<<"b: "<<b<<endl;

    string abcd ="abcd";
    reverse(abcd.begin(),abcd.end());
    cout<<"Reversed string: "<<abcd<<endl;

    return 0;
}