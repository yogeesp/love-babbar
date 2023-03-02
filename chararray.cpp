#include<iostream>
using namespace std;

int getLength(char name[]){

    int count=0;

    for(int i=0;name[i]!='\0';i++){
        count++;
    }
    return count;
} 

int main()
{
    char name[20];
    
    cout<<"Enter your name"<<endl;
    cin>>name;
    //elemnts after index 2 wont be visible
    //name[2]='\0';

    cout<<name<<endl;
    cout<<getLength(name);

    return 0;
}