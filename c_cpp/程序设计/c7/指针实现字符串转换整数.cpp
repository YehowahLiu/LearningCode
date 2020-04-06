#include <stdio.h>

int myatoi(char *string);

int main(){
    char a[20];
    int n;
    scanf("%s",a);

    n = myatoi(a);
    printf("%d",n);
    return 0;
}

int myatoi(char *string){
    int ans=0,tag=1;
    char *p=string;
    while(*p!='\0'){
        if(*p=='-')tag=-1;
        else ans = 10 * ans + tag * (*p-'0');
        p++;
    }
    return ans;
}