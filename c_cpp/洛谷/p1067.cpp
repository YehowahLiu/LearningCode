#include <iostream>
using namespace std;

void f(int n, int a)
{
    if(n==0)cout<<a;
    else{
        if(a==-1)cout<<'-';
        else if(a!=1) cout<<a;
        cout<<'x';
        if(n!=1)cout<<'^'<<n;
    }
}

int main()
{
    int n, a;
    cin >> n >> a;
    f(n,a);
    while(n--){
        cin>>a;
        if(a>0) cout<<'+';
        if(a!=0) f(n,a);
    }
    return 0;
}