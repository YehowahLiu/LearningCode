#include <iostream>
using namespace std;

int main()
{
    long long n;
    int i = 0;
    char s[60];
    cin >> n >> s;
    n = (n % 26)-26;
    while (s[i] != '\0')
    {
        s[i] += n;
        if (s[i] > 'z')
            s[i] -= 26;
        if (s[i] < 'a')
            s[i] += 26;
        i++;
    }
    cout << s;
    return 0;
}