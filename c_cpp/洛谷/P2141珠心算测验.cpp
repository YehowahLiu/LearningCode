#include <iostream>
using namespace std;

int main()
{
    int buck[20005] = {0}, tag[20005] = {0}, ans = 0, maxn = 0, n, a[105];
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        tag[a[i]] = 1;
    }
    for (int i = 0; i < n; i++)
    {
        for (int k = i + 1; k < n; k++)
        {
            buck[a[i] + a[k]]++;
            maxn = max(a[i] + a[k], maxn);
        }
    }
    for (int i = 2; i <= maxn; i++)
    {
        if (buck[i] && tag[i])
            ans++;
    }
    cout << ans << endl;
    return 0;
}