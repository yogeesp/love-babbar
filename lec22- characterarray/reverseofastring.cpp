#include<iostream>
using namespace std;

void reverse(char name[]){
    int j = 0;
    while(name[j] != '\0'){
        j++;
    }
    j--;

    for(int i=0;i<j;i++,j--){
        swap(name[i],name[j]);
    }

}
 
int main()
{
    char name[20];

    cout<<"Your name is: ";
    cin>>name;


    reverse(name);

    cout<<"Reversed array:"<<" "<<name;
    return 0;
}