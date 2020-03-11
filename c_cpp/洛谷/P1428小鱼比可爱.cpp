#include <iostream>
#include <cstring>
using namespace std;

int ctm(int a[], int i)
{
    if (i == 0)
        return 0;
    int cnt = 0;
    for (int j = 0; j < i; j++)
    {
        a[j] < a[i] ? cnt++ : 1;
    }
    return cnt;
}

int main()
{
    int N, a[110], b[110];
    cin >> N;
    int i;
    for (i = 0; i < N; i++)
    {
        cin >> a[i];
        b[i] = ctm(a, i);
    }
    for (int j = 0; j < i - 1; j++)
        cout << b[j] << ' ';
    cout << b[i - 1];
    return 0;
}