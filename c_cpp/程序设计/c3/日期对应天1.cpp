#include <iostream>
using namespace std;

int main()
{
    int y, m, d, s;
    cin >> y;
    d += y % 10;
    y /= 10;
    d += 10 * (y % 10);
    y /= 10;
    m += y % 10;
    y /= 10;
    m += 10 * (y % 10);
    y /= 10;
    s = d;
    while (--m)
    {
        switch (m)
        {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            s += 31;
            break;
        case 2:
            s += (28 + ((y % 400 == 0) || ((y % 4 == 0) && (y % 100 != 0))));
            break;
        default:
            s += 30;
        }
    }
    cout << s;
    return 0;
}