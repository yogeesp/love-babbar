#include<iostream>
#include<vector>
using namespace std;
 
double average(vector<int>& salary) {
    double min=salary[0],max=salary[0];
    for(int i=0;i<salary.size();i++){
        if (min>salary[i])
            min=salary[i];
        else if (max<salary[i])
            max=salary[i];
    }
    double avg=(max-min)/2;
    return avg;
}
int main()
{
    double average({4000,3000,1000,2000});

    return 0;
}