#include <iostream>
using namespace std;

int n,k,x[20],ans=0;

bool isp(int x){//素数判断
    for(int i=2;i*i<=x;i++){
        if(x%i==0)return false;
    }
    return true;
}

void dfs(int rest_num,int saved_sum,int pos){//深度优先搜索
    if(rest_num==0) ans+=isp(saved_sum);
    else{
        for(int i=pos;i+rest_num<=n;i++){
            dfs(rest_num-1,saved_sum+x[i],i+1);
        }
    }
}

int main(){
    cin>>n>>k;
    for(int i=0;i<n;i++) cin>>x[i];
    dfs(k,0,0);
    cout<<ans;
    return 0;
}