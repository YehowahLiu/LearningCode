#include <stdio.h>
#include <math.h>

void swap(int &a,int &b){
    int i=0;
    i=a,a=b,b=i;
}

int main(){
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    double p=(a+b+c)/2;
    double s;

    c<a?swap(a,c):void();
    c<b?swap(c,b):void();
    if(a+b>c){
        s=sqrt(p*(p-a)*(p-b)*(p-c));
        printf("%g\n",s);
    }else{
        printf("Error Data!");
    }
    return 0;
}