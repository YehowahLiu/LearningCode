#include <iostream>
using namespace std;

int main(){
    int n[4][4],ans=1;
    for(int i=0;i<4;i++)
        for(int j=0;j<4;j++){
            cin>>n[i][j];
            if(i==j) ans*=n[i][j];
        }
    cout<<ans<<endl;
    return 0;
}