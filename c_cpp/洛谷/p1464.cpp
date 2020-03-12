#include <iostream>
#include <cstring>
typedef long long ll;
using namespace std;
ll buff[25][25][25];

ll w(ll a, ll b, ll c)
{
    if (a <= 0 || b <= 0 || c <= 0)
        return 1;
    else if (buff[a][b][c] != 0)
        return buff[a][b][c];
    else if (a > 20 || b > 20 || c > 20)
        buff[a][b][c] = w(20, 20, 20);
    else if (a < b && b < c)
        buff[a][b][c] = w(a, b, c - 1) + w(a, b - 1, c - 1) - w(a, b - 1, c);
    else
        buff[a][b][c] = w(a - 1, b, c) + w(a - 1, b - 1, c) + w(a - 1, b, c - 1) - w(a - 1, b - 1, c - 1);
    return buff[a][b][c];
}

int main()
{
    ll a, b, c;
    memset(buff, 0, sizeof(buff));
    while (1)
    {
        cin >> a >> b >> c;
        if (a == -1 && b == -1 && c == -1)
            break;
        cout << "w(" << a << ", " << b << ", " << c << ") = ";
        a = (a > 20) ? 21 : a;
        b = (b > 20) ? 21 : b;
        c = (c > 20) ? 21 : c;
        cout << w(a, b, c) << endl;
    }
    return 0;
}