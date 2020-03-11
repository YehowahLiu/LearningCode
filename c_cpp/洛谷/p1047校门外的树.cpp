#include <iostream>
using namespace std;

int main(){
    int l,m,a[10010]={0},begin,end,s=0;
    cin >>l >>m ;
    for(int i=0;i<=l;i++)a[i]++;
    while(m--){
        cin>>begin>>end;
        for(int i=begin;i<=end;i++)a[i]-=a[i];
    }
    for(int i=0;i<=l;i++)s+=a[i];
    cout<<s;
    return 0;
}   