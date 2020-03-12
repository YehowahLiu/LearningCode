#include <iostream>
#include <cstring>
using namespace std;

int main(){
    char a[10],b[10];
    int s1=1,s2=1;
    cin>>a>>b;
    for(int i=0;i<strlen(a);i++){
        s1*=a[i]-'A'+1;
    }
    for(int i=0;i<strlen(b);i++){
        s2*=b[i]-'A'+1;
    }
    cout<<(((s1-s2)%47)?"STAY":"GO");
    return 0;
}