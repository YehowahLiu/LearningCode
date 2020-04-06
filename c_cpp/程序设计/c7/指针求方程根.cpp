#include <iostream>
#include <cmath>
using namespace std;

double equation(double (*func)(double), double a, double b, double eps);
double f1(double x);
double f2(double y);

int main(){
    double a,b,c,d,ans1,ans2,eps=1.0e-7;
    cin>>a>>b>>c>>d;
    ans1 = equation(f1,a,b,eps);
    ans2 = equation(f2,c,d,eps);
    cout<<ans1<<endl<<ans2<<endl;
    return 0;
}

double equation(double (*func)(double), double a, double b, double eps){
    if(fabs(func(a)) <= eps)return a;
    else if(fabs(func(b)) <= eps)return b;
    else{
        double mid = (a + b) / 2;
        while(fabs(b-a)>eps){
            if(fabs(func(mid)) <= eps) return mid;
            else if(func(mid)*func(a)>0) a = mid;
            else b = mid;
            mid = (a + b) /2;
        }
        return mid;
    }
}
double f1(double x){
    return x*x+2*x-3;
}
double f2(double x){
    return sin(x);
}