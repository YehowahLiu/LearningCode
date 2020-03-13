#include <iostream>
#include <string.h>
using namespace std;

//参考大佬思路，有穷自动机
void tolower(char *a,int n){
    for(int i=0;i<n;i++)
        if(a[i]>='A'&&a[i]<='Z') a[i]+=32;
}

int main(){
    char word[15],cap[1000005];
    int state=0,ans=0,ans1=-1;
    cin.getline(word,15);
    cin.getline(cap,1000005);
    int wlen=strlen(word),clen=strlen(cap);
    tolower(word,wlen),tolower(cap,clen);

    for(int i=0;i<clen;i++){
        switch(state){
            case 0:
            if(cap[i]==word[0]) state=1;
            else if(cap[i]==' ') state=0;
            else state=-1;
            break;
            case -1:
            if(cap[i]==' ') state=0;
            break;
            default:
            if(state<wlen){
                if(cap[i]==' ')state=0;
                else if(cap[i]==word[state])state++;
                else state=-1;
            }
            else if(state=wlen){
                if(cap[i]==' '){
                    state=0;
                    ans++;
                    if(ans==1)ans1=i-wlen;
                }else
                state=-1;
            }
        }
    }
    ans?cout<<ans<<' '<<ans1:cout<<ans1;
    return 0;
}