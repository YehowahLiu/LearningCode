// 本题冒泡
#include <stdio.h>
int main(){
    int n[10],tmp;
    for(int i=0;i<10;i++){
        scanf("%d",&n[i]);
    }
    for(int i=0;i<9;i++){
        for(int j=0;j<9-i;j++){
            if(n[j]>n[j+1]){
                tmp=n[j];
                n[j]=n[j+1];
                n[j+1]=tmp;
            }
        }
    }
    for(int i=0;i<9;i++)
        printf("%d ",n[i]);
    printf("%d",n[9]);
    return 0;
}