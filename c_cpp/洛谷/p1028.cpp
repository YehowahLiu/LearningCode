#include <iostream>
#include <cstring>
using namespace std;

int mem[1010];

int f(const int x){
    if(x==1)return 1;
    else if(mem[x]!=1)return mem[x];
    else{
        for(int i=1;i<=x/2;i++)
            mem[x]+=f(i);
        return mem[x];
    }
}

int main(){
    int x;
    cin>>x;
    for(int i=0;i<x+10;i++){
        mem[i]=1;
        }
    cout<<f(x);
    return 0;
}
//递归，记忆化搜索