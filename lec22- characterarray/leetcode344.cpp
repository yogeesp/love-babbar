//Reverse String

#include<iostream>
#include <vector>
using namespace std;

class Solution {
public:
    void reverseString(vector<char>& s) {
    int n=s.size();
    int j=n-1;

    for(int i=0;i<j;i++,j--){
        swap(s[i],s[j]);
    }

    }
};

 int main()
 {
    Solution s;

    // vector<char> v = {};
    int size_of_v;
    cout<<"Enter size of the vector";
    cin>>size_of_v;

    vector<char> v(size_of_v);
    for(int i =0;i<v.size();i++){
        cin>>v[i];
    }
    s.reverseString(v);
    for(int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;

    return 0;  
 }