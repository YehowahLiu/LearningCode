#include <iostream>
using namespace std;

//【求N个数的最大和较大数】用户输入n个正整数，输出最大数和第二大数。
int main()
{
    int n, tmp, m1 = 0, m2 = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> tmp;
        if (tmp > m2)
        {
            m2 = tmp;
            if(m2>m1){
                tmp=m1;
                m1=m2;
                m2=tmp;
            }
        }
    }
    cout<<m1<<endl<<m2;
    return 0;
}