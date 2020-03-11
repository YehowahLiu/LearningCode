#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char s[15], l;
    int sum = 0, j = 1;
    cin >> s;
    for (int i = 0; i < strlen(s); i++)
    {
        if (j > 9)
            break;
        else if (s[i] != '-')
        {
            sum += j * (s[i] - '0');
            j++;
        }
        else
            continue;
    }
    sum = sum % 11;
    l = sum == 10 ? 'X' : '0' + sum;
    if (l == s[12])
    {
        cout << "Right";
    }
    else
    {
        s[12] = l;
        cout << s;
    }
    return 0;
}