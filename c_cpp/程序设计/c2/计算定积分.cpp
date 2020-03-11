#include <stdio.h>
#include <math.h>

int main(){
    double a,b;
    scanf("%lf%lf",&a,&b);
    double detax=(b-a)/200;
    double s=0;
    for(double i=a+detax/2;i<b;i+=detax){
        s+=detax*(sin(i)+exp(i));
    }
    printf("%g",s);
    return 0;
}