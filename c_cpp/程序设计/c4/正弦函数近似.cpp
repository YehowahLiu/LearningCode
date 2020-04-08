/* 
【正弦函数近似值计算】用户输入x，利用下列公式求反正弦函数近似值。
arcsin(x)=x+pow(x,3)/(2*3)+1*3*pow(x,5)/(2*4*5)+....,
其中 |x|<1，通项u=(2n)!*pow(x,2n+1)/(pow(2,2n)*pow(n!,2)*(2n+1))，
结束条件为|u|< 1.0e-7。
提示：计算通项的递推公式, 由前一项计算后一项。(结果保留小数点后面6位）
 */
//更新：dalao解法

#include <stdio.h>
#include <math.h>

int main()
{
    double arcsin = 0.0, u, x, n = 1;

    scanf("%lf", &x);

    arcsin = x;
    u = pow(x, 3) / (2 * 3);

    while (fabs(u) >= 1.0e-7)
    {
        arcsin = arcsin + u;
        u = pow(2 * n + 1, 2) * pow(x, 2) * (n + 1) * u / (2.0 * pow(n + 1, 2) * (2 * n + 3));
        //注意此处通项要通过上一次通项算出，每次都重新计算的话浮点数运算误差吃不消
        n = n + 1;
    }

    printf("%lf", arcsin);

    return 0;
}