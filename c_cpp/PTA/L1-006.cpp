#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int n,start=0,max_cnt=0;
    cin>>n;
    for(int i=2;i<=sqrt(n);i++){
        int tmp=n,j=i,cnt=0;
        while(tmp%j==0){
            tmp/=j++;
            cnt++;
        }
        if(cnt>max_cnt){
            start=i;
            max_cnt=cnt;
        }
    }
    if(max_cnt){
        cout<<max_cnt<<endl;
        for(int i=0;i<max_cnt-1;i++)
            cout<<start++<<'*';
        cout<<start;
    }else{
        cout<<'1'<<endl<<n;
    }
    return 0;
}