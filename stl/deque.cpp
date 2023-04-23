//Double ended queue -Dynamic

#include<iostream>
#include<deque>
using namespace std;
 
int main()
{
    deque<int> d;

    d.push_back(1);
    d.push_front(2);

    cout<<d[1]<<endl;
    d.erase(d.begin(),d.begin()+1);

    for(int i:d){
        cout<<i<<" ";
    }
    cout<<endl;
    return 0;
}