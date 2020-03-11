#include <iostream>
using namespace std;

int main(){
    int num,s[5],p[5],n[5],mind=999999999;
    cin>>num>>s[0]>>p[0]>>s[1]>>p[1]>>s[2]>>p[2];
    for(int i=0;i<3;i++){
        n[i]=num/s[i];
        if(num>s[i]*n[i]) n[i]++;
        mind=mind>n[i]*p[i]?n[i]*p[i]:mind;
    }
    cout<<mind<<endl;
    return 0;
}