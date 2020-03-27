#include <iostream>
using namespace std;

bool isprime(int a);

int main(){
    int a;
    while (1){
        cin>>a;
        if(a){
            if(isprime(a)) cout<<a<<' ';
        }else break;
    }
    
    return 0;
}

bool isprime(int a){
    if(a==2)return 1;
    else if(a==1||a%2==0)return 0;
    else{
        for(int i=3;i*i<=a;i+=2){
            if(a%i==0)return 0;
        }
        return 1;
    }
}