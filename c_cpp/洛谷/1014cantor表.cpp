#include <iostream>
using namespace std;

int main(){
    long long n,i=1;
    cin>>n;
    while(n>0){
        n-=i;
        i++;
    }
    i%2?cout<<n+i-1<<'/'<<1-n:cout<<1-n<<'/'<<n+i-1;
    return 0;
}