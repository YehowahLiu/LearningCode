#include <iostream>
#include <math.h>
using namespace std;
const double eps = 1e-9;
/*
【牛顿迭代计算方程根】
利用牛顿迭代公式：x[n+1]=x[n]-f(x[n])/df(x[n])，
其中df(x[n])表示f(x)取导数后在x[n]处的值。
计算方程：2*pow(x,3)-4*pow(x,2)+3*x-6＝0在1.5附近的根。
迭代结束条件为: |f(x[n+1])|<1.e-9 与 |x[n+1]-x[n]|<1.e-9 同时成立。
*/
int main()
{
    double x1 = 1.5;
    double x = 1.5;
    // cout << x << ' ' << x1 << endl;

    do
    {
        x = x1;
        // cout << x << ' ' << x1 << endl;
        x1 = x - (-6 + x * (3 + x * (-4 + x * 2))) / (3 + x * (-8 + x * 6));
    } while (fabs(-6 + x1 * (3 + x1 * (-4 + x1 * 2))) >= eps || fabs(x1 - x) >= eps);
    cout << x1;
    return 0;
}