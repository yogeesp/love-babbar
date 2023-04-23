#include<iostream>
#include<vector>
using namespace std;
 
int main()
{
    vector<int> v;
    v.push_back(1);
    cout<<v.size()<<endl;

    v.emplace_back(2);
    cout<<v.size()<<endl;

    cout<<v.back()<<endl;
    //end shows memory address next too last element
    vector<int>::iterator it =v.end()-1;
    cout<<*(it)<<endl;

    v.push_back(4);

    for(auto it:v){

        cout<<it<<" ";
    }
    cout<<endl;
    v.erase(v.begin()+1);
    
    vector<int>copy(2,50);
    //{50 50 1 4}
    v.insert(v.begin(),copy.begin(),copy.end());

    for(auto it:v){

        cout<<it<<" ";
    }

    v.clear();
    
    return 0;
}
