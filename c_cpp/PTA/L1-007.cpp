#include <iostream>
using namespace std;

char Num[][5]={"ling","yi","er","san","si",
                "wu","liu","qi","ba","jiu"};

int main(){
    char n[50];
    int i=0;
    cin>>n;
    while(1){
        if(n[i]=='-')cout<<"fu";
        else{
            cout<<Num[n[i]-'0'];
        }
        ++i;
        if(n[i]=='\0')break;
        else cout<<' ';
    }
    return 0;
}