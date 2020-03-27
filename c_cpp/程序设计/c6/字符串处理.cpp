//【除字符串中非字母字符函数】编写去除字符串中包含的非字母字符（不包括空格）函数，并将小写字母转换成大写字母。
#include <iostream>
using namespace std;

void StrConv(char a[]){
    for(int i=0;a[i]!='\0';i++){
        if(a[i]==' '||(a[i]<='Z'&&a[i]>='A')) cout<<a[i];
        else if(a[i]<='z'&&a[i]>='a'){
            a[i]-=('a'-'A');
            cout<<a[i];
        }
        else continue;
    }
}

int main(){
    char s[50];
    cin.getline(s,50);
    StrConv(s);
    return 0;
}