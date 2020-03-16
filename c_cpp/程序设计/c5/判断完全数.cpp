#include <stdio.h>

int main(){
    int n,n1;
    scanf("%d",&n);
    if(n>1){
        n1=n;
        for(int i=1;i<n;i++){
            if(n%i==0){
                n1-=i;
            }
        }
        n1?printf("no\n"):printf("yes\n");
    }else{
        printf("no");
    }
    return 0;
}