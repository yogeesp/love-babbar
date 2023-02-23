#include<iostream>
using namespace std;


int printMin(int arr[],int n){

    int minE=arr[0];
    for (int i=0;i<n;i++){

        minE=min(minE,arr[i]);
    }
    return minE;
}

int printMax(int arr[],int n){

    int maxE=arr[0];
    for (int i=0;i<n;i++){

        maxE=max(maxE,arr[i]);
    }
    return maxE;
}

int main()
{
    int a[10]={7,8,23,45,78,9,16,29,90,67};
    int n=10;
    cout<<printMax(a,n)<<endl;;
    cout<<printMin(a,n);
    return 0;
}



/* #include<iostream>
#include<algorithm>
using namespace std;

int main() {
    int a[10]={7,8,23,45,78,9,16,29,90,67};
    int n=10;
    int* minE = std::min_element(a, a+n);
    int* maxE = std::max_element(a, a+n);
    cout<<*maxE<<endl;
    cout<<*minE;
    return 0;
}
 */