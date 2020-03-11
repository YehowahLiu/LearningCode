#include <iostream>
using namespace std;

int main()
{
    int n, a[1000010], maxr = 1, r = 1;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 1; i < n; i++)
    {
        if (a[i - 1] >= a[i])
        {
            maxr = max(maxr, r);
            r = 1;
        }
        else
            r++;
    }
    cout << maxr << endl;
    return 0;
}