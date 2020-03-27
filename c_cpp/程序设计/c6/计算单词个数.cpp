#include <iostream>
using namespace std;

int CntWord(char s[]);
bool isC(char c);

int main(){
    char s[50];
    cin.getline(s,50);
    cout<<CntWord(s);
    return 0;
}

int CntWord(char s[]){
    int cnt=0,pos=-1,st=0;
    while(1){
        pos++;
        if(s[pos]=='\0') break;
        switch (st)
        {
        case 0:
            if(isC(s[pos])){
                cnt++;
                st=1;
            }
            break;
        default:
            if(isC(s[pos])==0) st=0;
            break;
        }
    }
    return cnt;
}

bool isC(char c){
    return (c>='a'&&c<='z')||(c>='A'&&c<='Z');
}