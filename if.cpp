#include <iostream>
using namespace std;

int main(){
    char a;
    cin >> a;
    if (a>=97 and a<=122){
        cout<<"lowercase";
    }
    else if (a>=65 and a<=90){
        cout<<"uppercase";
    }
    else if (a>=48 and a<=57){
        cout<<"numeric digit";
    }
    else cout<<"Enter valid";

    return 0;
}