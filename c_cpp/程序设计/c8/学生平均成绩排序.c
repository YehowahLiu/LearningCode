#include <stdio.h>
#include <string.h>

struct student{
    int id;
    char name[15];
    int en;
    int math;
    int phy;
}stu[4];

void input(struct student s[]){
    int i=0;
    for(;i<4;++i){
        scanf("%d%s%d%d%d",&s[i].id,&s[i].name,&s[i].en,&s[i].math,&s[i].phy);
    }
}

void sort(struct student s[]){
    int i=0,j=0;
    for(;i<3;++i){
        for(j=0;j<4-i-1;++j){
            if((s[j].en+s[j].math+s[j].phy-s[j+1].en-s[j+1].math-s[j+1].phy)>0){
                struct student tmp=s[j];
                s[j]=s[j+1];
                s[j+1]=tmp;
            }
        }
    }
}

void output(struct student s[]){
    int i=0;
    for(;i<4;++i){
        printf("%d %s %d %d %d ",s[i].id,s[i].name,s[i].en,s[i].math,s[i].phy);
        if(i!=3)printf("\n");
    }
}

int main(){
    input(stu);
    sort(stu);
    output(stu);
    return 0;
}