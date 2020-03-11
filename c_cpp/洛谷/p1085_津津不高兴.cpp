#include <iostream>
using namespace std;

int main(){
    int flag=0,M=0,day=0,a,b;
    for(int i=1;i<=7;i++){
        cin>>a>>b;
        if(a+b>8){
            flag=1;
            if(a+b-8>M){
                day=i;
                M=a+b-8;
            }
        }
    }
    cout<<day<<endl;
    return 0;
}