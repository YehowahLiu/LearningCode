/*
L1-050 倒数第N个字符串
给定一个完全由小写英文字母组成的字符串等差递增序列，
该序列中的每个字符串的长度固定为 L，从 L 个 a 开始，以 1 为步长递增。
例如当 L 为 3 时，序列为 { aaa, aab, aac, ..., aaz, aba, abb, ..., abz, ..., zzz }。
这个序列的倒数第27个字符串就是 zyz。
对于任意给定的 L，本题要求你给出对应序列倒数第 N 个字符串。
*/
#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int l,tmp,n,s[10];
    cin>>l>>n;
    tmp=pow(26,l)-n;
    for(int i=0;i<l;i++){
        s[i]=tmp%26;
        tmp=tmp/26;
    }
    for(int i=l-1;i>=0;i--){
        cout<<(char)('a'+s[i]);
    }
    cout<<endl;
    return 0;
}