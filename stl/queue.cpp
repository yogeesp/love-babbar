#include<iostream>
#include<queue>
using namespace std;
 
int main()
{
    queue<int> q;

    q.push(4);
    q.push(3);

    cout<<q.front()<<endl;
    // for(int i:q){
    //     cout<<q<<" ";
    // }

    return 0;
}