#include <stdio.h>
#include <math.h>

double eps = 1e-5;

int main()
{
    double a, b, ans;
    char op;
    scanf("%lf %c %lf", &a, &op, &b);
    switch (op)
    {
    case '+':
        ans = a + b;
        break;
    case '-':
        ans = a - b;
        break;
    case '*':
        ans = a * b;
        break;
    case '/':
        ans = a / b;
    }
    if (fabs(fmod(ans, 1.0)) < eps)
        printf("%g", ans);
    else
        printf("%.1lf", ans);
    return 0;
}