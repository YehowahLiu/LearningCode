#include <iostream>
using namespace std;

int main()
{
    int x, n;
    unsigned long long s = 0;
    cin >> x >> n;
    if (x < 6)
    {
        n -= 6 - x;
        s += (6 - x) * 250;
    }
    else
        n += x - 6;
    s += 5 * 250 * (n / 7);
    n = n % 7;
    s += (n < 3 ? 0 : n - 2) * 250;
    cout << s;
    return 0;
}
/* 下面带佬题解.
#include<iostream>
using namespace std;

int main()
{
    int x, n;
    cin >> x >> n;
    cout << (n - (int(n / 7.0+0.5) * 2 + ((n % 7 != 0) ? ((x - 6 >= 0) ? 1 : 0) : 0))) * 250 << endl;

    return 0;
}
*/
/* 大佬清晰的思路，瞻仰一下.
#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
    int x, n;
    cin >> x >> n;
    int d = n / 7 * 5; // 整周的工作日数
    int r = n % 7;
    if (r > 0) // 有剩余天数
    {
        if (r + x == 7 || x == 7) //如开始为周日肯定只休息一天；如r+x==7即最后一天为周六，也休息一天
            r -= 1;
        else if (r + x >= 8) //最后一天已过周日，休息两天
            r -= 2;
    }
    cout << (d + r) * 250 << endl;
    return 0;
}
*/