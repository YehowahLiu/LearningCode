#include <iostream>
#include <cstring>
using namespace std;

int main(){
    char s[50];
    int i=0,r,len;
    cin>>s;
    len=strlen(s);
    r=len%3;
    if(len<=3)cout<<s;
    else{
        if(r==0)r=3;
        for(;i<r;i++){
            cout<<s[i];
        }
        for(;i<len;i+=3){
            cout<<','<<s[i]<<s[i+1]<<s[i+2];
        }
    }
    return 0;
}