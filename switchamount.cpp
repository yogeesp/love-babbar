/* Write a program using switch case statement in c++ for calculating the total 
number of notes required of Rs 100, Rs 50, Rs 20 and Rs 1 for a total number of amount?*/

#include<iostream>
using namespace std;

int main()
{
int amount;
int n100 = 0, n50 = 0, n20 = 0, n1 = 0;

cout << "Enter the amount: ";
cin >> amount;


while (amount > 0) {
    switch (amount % 100) {
        case 0:
        n100++;
        amount -= 100;
        break;
        case 50:
        n50++;
        amount -= 50;
        break;
        case 20:
        n20++;
        amount -= 20;
        break;
        default:
        n1++;
        amount -= 1;
        break;
    }
    }

    cout << "Number of 100-rupee notes: " << n100 << endl;
    cout << "Number of 50-rupee notes: " << n50 << endl;
    cout << "Number of 20-rupee notes: " << n20 << endl;
    cout << "Number of 1-rupee notes: " << n1 << endl;
    return 0;
}