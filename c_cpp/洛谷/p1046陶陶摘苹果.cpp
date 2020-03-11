#include <iostream>
using namespace std;

int main()
{
    int h[10], m, s;
    for (int i = 0; i < 10; i++)
        cin >> h[i];
    cin >> m;
    m += 30;
    for (int i = 0; i < 10; i++)
    {
        m >= h[i] ? s++ : 1;
    }
    cout << s;
    return 0;
}