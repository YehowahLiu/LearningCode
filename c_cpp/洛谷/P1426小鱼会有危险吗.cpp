#include <iostream>
using namespace std;

int main()
{
    double rate = 0.98, speed = 7, dis = 0, s, x;
    bool flag = 0;
    cin >> s >> x;
    while (dis < s + x)
    {
        if (dis >= s - x)
        {
            flag = (dis + speed <= s + x);
            break;
        }
        dis += speed;
        speed *= rate;
    }
    flag ? cout << 'y' : cout << 'n';
    return 0;
}