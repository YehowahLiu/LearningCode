#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    int year, mon, day;
    scanf("%d,%d", &year, &mon);
    switch (mon)
    {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        day = 31;
        break;
    case 2:
        day = 28 + ((year % 400 == 0) || ((year % 4 == 0) && (year % 100 != 0)));
        break;
    default:
        day = 30;
    }
    cout << day;
    return 0;
}