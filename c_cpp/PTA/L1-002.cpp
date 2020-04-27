/*
L1-002 打印沙漏
写个程序把给定的符号打印成沙漏的形状。
所谓“沙漏形状”，是指每行输出奇数个符号；各行符号中心对齐；相邻两行符号数差2；符号数先从大到小顺序递减到1，再从小到大顺序递增；首尾符号数相等。
给定任意N个符号，不一定能正好组成一个沙漏。要求打印出的沙漏能用掉尽可能多的符号。
*/
#include <iostream>
using namespace std;

int calc_l(int& n);
void printline(char c,int i,int l);

int main(){
    char cell;
    int n,l,rest;
    cin>>n>>cell;
    if(n==0){
        cout<<0;
        exit(0);
    }
    l=calc_l(n);
    for(int i=0;i<2*l-1;i++){
        printline(cell,i,l);
    }
    cout<<n;
    return 0;
}

int calc_l(int& n){
    int sum=1,l=2;
    n--;
    while(4*l-2<=n){
        n-=4*l-2;
        sum+=4*l-2;
        l++;
    }
    return l-1;
}

void printline(char c,int i,int l){
    if(i>=l)printline(c,2*l-2-i,l);
    else{
        for(int j=0;j<i;j++) cout<<' ';
        for(int j=0;j<(2*l-2*i-1);j++) cout<<c;
        cout<<endl;
    }
}