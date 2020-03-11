#include <stdio.h>

int main(){
    char s[10]="Love";
    int n=0;
    scanf("%d",&n);
    n=n%26;
    if(n<0)n+=26;
    for(int i=0;i<4;i++){
        s[i]+=n;
        if((s[i]>'Z'&&s[i]<'a')||s[i]>'z') s[i]-=26;
    }
    printf("%s",s);
    return 0;
}