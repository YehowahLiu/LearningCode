#include <iostream>
using namespace std;

int main()
{
    int n, x, sum = 0, i, j;
    cin >> n >> x;
    for (i = 1; i <= n; i++)
    {
        j = i;
        do
        {
            if (j % 10 == x)
                sum++;
            j = j / 10;
        } while (j > 0);
    }
    cout << sum << endl;
    return 0;
}