#include <iostream>
using namespace std;

int main(){
    char c,w[]="hello";
    int m=0;
    while(scanf("%c",&c)!=EOF){
        if(c==w[m]){
            m++;
            if(m>4)break;
        }
    }
    if(m>4) cout<<"YES";
    else cout<<"NO";
    return 0;
}