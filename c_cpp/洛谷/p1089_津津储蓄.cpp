#include <iostream>
using namespace std;

int main()
{
    int bgt = 0, crtm = 0, mim = 0, mon;
    bool p = false;
    for (int i = 1; i < 13; i++)
    {
        cin >> bgt;
        if (300 + crtm - bgt < 0)
        {
            p = true;
            mon = i;
            break;
        }
        crtm = crtm + 300 - bgt;
        if (crtm >= 100)
        {
            mim += 100 * (crtm / 100);
            crtm = crtm % 100;
        }
    }
    if (p)
        cout << '-' << mon << endl;
    else
    {
        crtm += mim / 100 * 120;
        cout << crtm << endl;
    }
    return 0;
}