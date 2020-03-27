#include <cstdio>

double power(double x,int k);
double Power(double x,int k,double ans);

int main(){
    int k;
    double x;
    scanf("%lf%d",&x,&k);
    printf("%.1lf",power(x,k));
    return 0;
}

double power(double x,int k){
    return Power(x,k,1.0);
}

double Power(double x,int k,double ans){
    if(k==0) return ans;
    else return Power(x,k-1,ans*x);
}