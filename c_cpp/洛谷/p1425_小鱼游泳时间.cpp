#include <iostream>
using namespace std;

int main(){
    int a,b,c,d,h,m;
    cin>>a>>b>>c>>d;
    m=d-b;
    h=c-a;
    m<0?m+=60,h--:1;
    cout<<h<<' '<<m<<endl;
    return 0;
}