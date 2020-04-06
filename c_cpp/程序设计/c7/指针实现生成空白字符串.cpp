#include <iostream>
using namespace std;

char latter[] = {'A','B','C','D','E','F','G','H','I','G','K','L','M',
                'N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};

char *mystrspc(char *string, int n);
char *mystrspc2(char *string, int n);

int main(){
    char s[100];
    char *p=NULL;
    int n;
    cin>>n;

    p=mystrspc(s,n);
    cout<<'+'<<p<<'+'<<endl;

    p=mystrspc2(s,n);
    cout<<'+'<<p<<'+';

    p=NULL;
    return 0;
}

char *mystrspc(char *string, int n){
    char *p=string;
    for(int i=0;i<n;i++){
        *(p+i)=' ';
    }
    *(p+n)='\0';
    p=NULL;
    return string;
}

char *mystrspc2(char *string, int n){
    char *p=string;
    for(int i=0;i<n;i++){
        *(p+i)=((i+1)%10)?'0'+((i+1)%10):latter[(i+1)/10-1];
    }
    *(p+n)='\0';
    p=NULL;
    return string;
}