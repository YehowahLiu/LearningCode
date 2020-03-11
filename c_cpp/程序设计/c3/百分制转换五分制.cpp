#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cin >> a;
    if (a >= 90)
        b = 5;
    else if (a >= 80)
        b = 4;
    else if (a >= 70)
        b = 3;
    else if (a >= 60)
        b = 2;
    else
        b = 1;
    cout << b;
    return 0;
}