#include <iostream>
using namespace std;

//【搬砖问题】
//由n人搬n块砖，男人一次搬4块，女人一次搬3块，两个孩子搬1块。
//用户输入n，计算男人、女人和孩子的人数（列出所有组合）；
//如果无解，显示“no solution”
int main()
{
    int man, wom, chi, n;
    bool flag = 1;
    cin >> n;
    for (man = 1; 4 * man < n && man < n; man++)
    {
        int res = n - 4 * man;
        for (wom = 1; 3 * wom < res && wom < (n - man); wom++)
        {
            chi = n - man - wom;
            if (chi / 2 == res - 3 * wom)
            {
                cout << man << ' ' << wom << ' ' << chi << endl;
                flag = 0;
            }
        }
    }
    if (flag)
        cout << "no solution" << endl;
    return 0;
}