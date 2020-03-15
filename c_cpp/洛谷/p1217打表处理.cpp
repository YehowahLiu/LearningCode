#include <iostream>
#include <bits/stdc++.h>
using namespace std;
string ans;

bool isp(string s1){
    stringstream tmp1;
    long long x;
    tmp1<<s1;
    tmp1>>x;
    for(long long i=2;i*i<=x;i++)
        if(x%i==0)return false;
    return true;
}

void num(int x,bool fin,string s){
    if(fin){
        for(char i='1';i<='9';i+=2){
            string a="";
            a+=i;
            num(x-2,0,a);
        }
    }else if(x==1){
        string backup=s;
        reverse(s.begin(),s.end());
        for(char i='0';i<='9';i++){
            string t=backup;
            t+=i;
            t+=s;
            if(isp(t)){
                ans=ans+','+t;
                cout<<t<<endl;
            }
        }
    }else{
        for(char i='0';i<='9';i++){
            string t=s;
            t+=i;
            num(x-2,0,t);
        }
    }
}

int main(){
    ofstream output_f;
    output_f.open("p1217表.txt");
    ans="{2,3,5,7,11";
    //三位数
    for(int i=3;i<=8;i+=2)
        num(i,1,"");
    ans+='}';
    output_f<<ans;
    output_f.close();
    return 0;
}