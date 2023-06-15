//Stores unique elements in sorted order
//Uses Binary Search Tree (BST)
//No modification,only insertion or deletion
#include<iostream>
#include<set>
using namespace std;
 
int main() 
{
    set<int> s;

    //time complexity of insert:O(log n)
    s.insert(5);
    s.insert(2);
    s.insert(6);
    s.emplace(8);

    for(int i:s){
        cout<<i<<endl;
    }cout<<endl;

    set<int>::iterator it = s.begin();
    it++;
    //time complexity of erase:O(log n)
    s.erase(it);

    for(int i:s){
        cout<<i<<endl;
    }
    cout<<endl;
    //Check if 5 is present,count complexity:O(log n)
    cout<<s.count(5)<<endl;
    //find() returns iterator pointing to 6
    set<int>::iterator itr = s.find(6);
    cout<<""
    // time complexity of end:O(log n)
    
    for(set<int>::iterator it2=itr;it2!=s.end();it2++){
        cout<<*it2<<" ";
    }cout<<endl;

    return 0;
}
