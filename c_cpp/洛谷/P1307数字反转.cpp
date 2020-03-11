#include <iostream>
using namespace std;

int main(){
    long long n,tmp,ans=0,flag=0;
    cin>>n;
    if(n<0){
        flag=1;
        n=0-n;
    }
    do{
        tmp=n%10;
        n=n/10;
        ans = 10*ans+tmp;
    }while(n>0);
    flag?cout<<'-'<<ans:cout<<ans;
    return 0;
}