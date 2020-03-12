#include <stdio.h>

int main()
{
    int n, s = 1, i = 0;
    scanf("%d", &n);
    for (; i < n - 1; i++)
    {
        s = 2 * (s + 1);
    }
    printf("%d", s);
    return 0;
}