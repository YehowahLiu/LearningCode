#include <iostream>
using namespace std;

void swap(int *a,int *b);

int main(){
    int a[4][4],*p=a[0];
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            cin>>a[i][j];
        }
    }
    p=a[0];
    for(int i=0;i<3;i++){
        for(int j=i+1;j<4;j++){
            swap(p+i*4+j,p+j*4+i);
        }
    }
    p=NULL;
    for(int i=0;i<4;i++){
        for(int j=0;j<3;j++){
            cout<<a[i][j]<<' ';
        }
        cout<<a[i][3]<<endl;
    }
    return 0;
}

void swap(int *a,int *b){
    int tmp = *a;
    *a = *b;
    *b = tmp;
}