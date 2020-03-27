#include <iostream>
using namespace std;

void selectsort(int a[],int n);

int main(){
    int n,a[50];
    cin>>n;
    for(int i=0;i<n;i++)cin>>a[i];
    selectsort(a,n);
    for(int i=0;i<n-1;i++)cout<<a[i]<<' ';
    cout<<a[n-1];
    return 0;
}

void selectsort(int a[],int n){
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(a[j]<a[i]){
                int tmp=a[j];
                a[j]=a[i];
                a[i]=tmp;
            }
        }
    }
}