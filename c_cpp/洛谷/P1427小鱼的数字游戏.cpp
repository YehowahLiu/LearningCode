#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    int a[110], tmp, i = 0;
    a[0] = 0;
    while (1)
    {
        cin >> tmp;
        if (tmp == 0)
        {
            break;
        }
        else
        {
            a[i] = tmp;
        }
        i++;
    }
    for (i--; i > 0; i--)
    {
        cout << a[i] << ' ';
    }
    cout << a[0] << endl;
    return 0;
}