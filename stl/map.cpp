#include<iostream>
#include<map>

using namespace std;
 
int main()
{   //search complexity:O(log n)
    map<int,string> m;
    //insertion complexity is O(log n)
    m[1]="babbar";
    m[2]="Gunjan";
    m[13]="Tarania";

    m.insert ({5,"Bheem"});

    cout<<"Before erase"<<endl;
    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;
    }
    //complexity of count is O(log n)
    cout<<"If 13 is present:"<<m.count(13)<<endl;
    //Erase complexity is O(log n)
    m.erase(13);
    cout<<"After erase"<<endl;
    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;
    }cout<<endl;
    //Complexity for find O(log n)
    auto it =m.find(5);

    for(auto i=it;i!=m.end();i++){
        cout<<(*i).first<<endl;
    }
    return 0;
}