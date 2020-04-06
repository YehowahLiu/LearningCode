#include <iostream>
using namespace std;

char *myltrim(char *string);

int main(){
    char a[50];
    cin.getline(a,50);
    char *p=myltrim(a);
    cout<<'['<<a<<']'<<endl;
    cout<<'['<<p<<']'<<endl;
    return 0;
}

char *myltrim(char *string){
    char* p=string;
    while(*p==' ')p++;
    return p;
}