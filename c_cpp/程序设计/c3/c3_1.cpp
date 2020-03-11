#include <iostream>
using namespace std;

void swap(int &a,int &b){
    int i=0;
    i=a,a=b,b=i;
}

int main(){
    int a,b,c,tmp=0;
    cin>>a>>b>>c;
    a>c?swap(a,c):void();
    b>c?swap(b,c):void();
    a+b>c?cout<<"YES":cout<<"NO";
    return 0;
}