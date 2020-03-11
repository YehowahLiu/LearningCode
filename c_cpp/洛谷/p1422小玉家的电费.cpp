#include <iostream>
#include <cstdio>
using namespace std;

int main(){
    int elec;
    double doll;
    cin>>elec;
    if(elec<=150)doll=0.4463*elec;
    else if(elec<=400) doll=66.945+(elec-150)*0.4663;
    else doll=183.52+(elec-400)*0.5663;
    printf("%.1lf\n",doll);
    return 0;
}