#include<iostream>
using namespace std;

int isPossible(int x, int y) {
	// Write your code here.

	if (x>y){

		return 0;
	}
	else if (x==y){
		return 1;
	}
	while(x!=y){
		if (x%2==0){
			x+=2;

		}
		else x+=1;

            if (x == y) {
                return 1;
            }

        if (x>y){
			
				return 0;
		 }

	
	} 
}
int main()
	{
		cout<<isPossible(6,8);
		return 0;
	}