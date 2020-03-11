#include <iostream>
using namespace std;

int main()
{
    int diff = 'a' - 'A';
    char s;
    cin >> s;
    if ('a' <= s && 'z' >= s)
        s -= diff;
    else if ('A' <= s && 'Z' >= s)
        s += diff;
    cout << s;
    return 0;
}