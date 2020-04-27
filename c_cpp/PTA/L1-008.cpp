#include <stdio.h>

int main(){
    int A,B,Sum=0;
    scanf("%d%d",&A,&B);
    for(int i=0;A+i<=B;i++){
        Sum+=A+i;
        printf("%5d",A+i);
        if(i%5==4||B==A+i)printf("\n");
    }
    printf("Sum = %d",Sum);
    return 0;
}