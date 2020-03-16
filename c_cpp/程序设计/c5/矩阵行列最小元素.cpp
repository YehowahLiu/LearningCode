#include <iostream>
using namespace std;

int main(){
    int n[4][4],ans=1,flag[4][4]={{0}},i1,j1,i2,j2;
    for(int i=0;i<4;i++)
        for(int j=0;j<4;j++){
            cin>>n[i][j];
        }
    for(int i=0;i<4;i++){
        i1=i,j1=0,i2=0,j2=i;
        for(int j=1;j<4;j++){
            if(n[i][j]<n[i1][j1]) i1=i,j1=j;
            if(n[j][i]<n[i2][j2]) i2=j,j2=i;
        }
        flag[i1][j1]++;
        flag[i2][j2]++;
    }
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++)
            if(flag[i][j]==2)
                cout<<n[i][j]<<' '<<i+1<<' '<<j+1<<endl;
    }
    return 0;
}