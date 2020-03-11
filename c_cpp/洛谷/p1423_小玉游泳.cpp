#include <iostream>
using namespace std;

int main()
{
    double len, pace = 2, crtl = 0;
    int n = 0;
    cin >> len;
    while (crtl < len)
    {
        crtl += pace;
        pace *= 0.98;
        n++;
    }
    cout << n << endl;
    return 0;
}