#include<iostream>
#include<list>

using namespace std;
int main()
{
    list<int> l;
    l.push_back(1);
    l.push_front(2);

    list<int> n(5,100);

    for (int i:n){
        cout<<i<<" ";
    }
    for(int i:l){
        cout<<i<<" ";
    }
    return 0;
}