#include <iostream>
using namespace std;

int *bubsort(int *num,int n);

int main(){
    int n,a[100];
    int *p=NULL;
    cin>>n;
    for(int i=0;i<n;i++)cin>>a[i];
    p=bubsort(a,n);
    while(n--)cout<<*p++<<' ';
    return 0;
}

int *bubsort(int *num,int n){
    int *p=NULL;
    for(int i=0;i<n-1;i++){
        p=num;
        for(int j=0;j<n-1-i;j++){
            if(*p>*(p+1)){
                int tmp=*p;
                *p=*(p+1);
                *(p+1)=tmp;
            }
            p++;
        }
    }
    p=NULL;
    return num;
}