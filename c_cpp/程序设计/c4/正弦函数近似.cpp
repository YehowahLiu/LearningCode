#include <stdio.h>
#include <math.h>
/* 
【正弦函数近似值计算】用户输入x，利用下列公式求反正弦函数近似值。
arcsin(x)=x+pow(x,3)/(2*3)+1*3*pow(x,5)/(2*4*5)+....,
其中 |x|<1，通项u=(2n)!*pow(x,2n+1)/(pow(2,2n)*pow(n!,2)*(2n+1))，
结束条件为|u|< 1.0e-7。
提示：计算通项的递推公式, 由前一项计算后一项。(结果保留小数点后面6位）
 */
//TODO:待优化更正
int main()
{
    double x, ans = 0, u, eps = 1e-7, t;
    int n = 0, fact1 = 1, fact2 = 1, tmp = 1;
    scanf("%lf", &x);

    u = t = x; // u计算初值
    while (fabs(u) >= eps)
    {
        ans += u;
        n++;
        t = t * x * x;
        tmp *= 4;
        fact1 *= (2 * n * (2 * n - 1));
        fact2 *= n;
        u = t * fact1 / ((double)tmp * fact2 * fact2 * (2 * n + 1));
    }

    printf("%.6lf", ans);
    return 0;
}