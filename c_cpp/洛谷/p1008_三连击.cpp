#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    for (int i = 123; i <= 329; i++)
    {
        a = i, b = 2 * i, c = 3 * i;
        int a1 = a / 100, a2 = a / 10 % 10, a3 = a % 10;
        int b1 = b / 100, b2 = b / 10 % 10, b3 = b % 10;
        int c1 = c / 100, c2 = c / 10 % 10, c3 = c % 10;
        if (a1 * a2 * a3 * b1 * b2 * b3 * c1 * c2 * c3 == 362880 && a1 + a2 + a3 + b1 + b2 + b3 + c1 + c2 + c3 == 45)
            cout << a << ' ' << b << ' ' << c << endl;
    }
    return 0;
}