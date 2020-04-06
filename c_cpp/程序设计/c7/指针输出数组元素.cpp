#include <iostream>
using namespace std;

int main(){
    int a[] = {1,2,3,4,5,6,7,8,9,10},n;
    int *p=a;
    cin>>n;
    for(int i=0;i<n;i++)cout<<*(p+i)<<' ';
    return 0;
}