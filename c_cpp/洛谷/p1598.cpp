#include <iostream>
#include <cstring>
using namespace std;

int main(){
    char tmp[110];
    int bkt[30]={0},maxn=0,nl=4,n[410];
    memset(n,-1,410);
    while(nl--){
        cin.getline(tmp,410);
        for(int i=0;i<strlen(tmp);i++){
            char c=tmp[i];
            if(c>='A'&&c<='Z'){
                bkt[c-'A']++;
                maxn=max(maxn,bkt[c-'A']);
                n[bkt[c-'A']]=max(c-'A',n[bkt[c-'A']]);
            }
        }
    }
    while(maxn--){
        for(int i=0;i<=n[maxn+1];i++){
                cout<<(bkt[i]>maxn?'*':' ');
                if(i!=n[maxn+1])cout<<' ';
        }
        cout<<endl;
    }
    cout<<"A B C D E F G H I J K L M N O P Q R S T U V W X Y Z"<<endl;
    return 0;
}