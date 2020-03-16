#include <iostream>
#include <string>
using namespace std;//头文件不解释

const string dictA[] = {"zero", "one", "two", "three", "four", "five",
                        "six", "seven", "eight", "nine", "ten", "eleven",
                        "twelve", "thirteen", "fourteen", "fifteen", "sixteen",
                        "seventeen", "eighteen", "nineteen"
                        };
const string dictB[] = {"zero", "ten", "twenty", "thirty", "forty",
                    "fifty", "sixty", "seventy", "eighty", "ninety"
                    };
const string dictC[] = {"", "thousand", "million", "billion", "trillion",
                        "thousand trillion", "million trillion", "billion trillion"
                        };
// 定义字符数组存储可能用到的英文字符串

string translate(unsigned int val)//定义转换的函数
{
    string s = "";              //s用于存储转换后的结果
    unsigned int v = val % 100; //求得百位之下的数字
    if (v <= 19)                //处理百位以下的部分
        s = dictA[v];
    else if (v > 19 && v % 10 == 0)
        s = dictB[v / 10];
    else
        s = ((v / 10) ? dictB[v / 10] + " " : "") + dictA[v % 10];

    s = ((val / 100) ? dictA[val / 100] + " hundred " : "") + s;//处理百位

    return s;
}

int main()
{
    string result = "";//存储最终结果
    unsigned long long val = 0;
    cin >> val;
    int i = 0;
    do
    {
        if (i != 0)
            result = dictC[i] + " " + result;
        result = translate(val % 1000) + " " + result;
        val = val / 1000;
        ++i;
    } while (val != 0);
    cout << result << endl;

    return 0;
}