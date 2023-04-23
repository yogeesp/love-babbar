#include<iostream>
#include<stack>
using namespace std;
 
int main()
{   
    stack<string> s;

    s.push("love");
    s.push("babbar");
    s.push("Kumar");

    cout<<s.top()<<endl;

    s.pop();
    cout<<s.top()<<endl;
    //no indexing like s[1] allowed
    cout<<"Size of stack "<<s.size();
    // for(str i:s){
    //     cout<<i<< " ";
    // }
    return 0;
}