#include <stdio.h>

int main(){
    int A=0,a=0,n=0,o=0,s=0;
    char c;
    while(scanf("%c",&c)!=EOF){
        s++;
        if(c>='A'&&c<='Z')A++;
        else if(c>='a'&&c<='z')a++;
        else if(c>='0'&&c<='9')n++;
        else o++;
    }
    printf("%d %d %d %d %d\n",A,a,n,o,s);
    return 0;
}