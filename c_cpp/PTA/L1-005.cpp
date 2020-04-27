#include <iostream>
#include <cstring>
using namespace std;

struct stu
{
    long long id;
    int pce;
};


int main(){
    int n,testpc,exampc;
    long long stuid;
    cin>>n;
    stu stus[n+2];

    while(n--){
        cin>>stuid>>testpc>>exampc;
        stus[testpc].id=stuid;
        stus[testpc].pce=exampc;
    }
    cin>>n;
    while(n--){
        cin>>testpc;
        cout<<stus[testpc].id<<' '<<stus[testpc].pce<<endl;
    }
    return 0;
}