#include <iostream>
#include <cstring>
using namespace std;

void mystrrev(int n,char string[]);

int main(){
    char s[50];
    cin>>s;
    mystrrev(strlen(s),s);
    return 0;
}

void mystrrev(int n,char string[]){
    cout<<string[n-1];
    if(n>1)mystrrev(n-1,string);
}