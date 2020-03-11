#include <iostream>
using namespace std;

int main()
{
    int n, buff[10001][4], x, y,ans=-1;
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> buff[i][0] >> buff[i][1] >> buff[i][2] >> buff[i][3];
    cin >> x >> y;
    while (n--)
    {
        if (x >= buff[n][0] && y >= buff[n][1] && x <= buff[n][0] + buff[n][2] && y <= buff[n][1] + buff[n][3])
        {
            ans= n + 1 ;
            break;
        }
    }
    cout << ans << endl;
    return 0;
}