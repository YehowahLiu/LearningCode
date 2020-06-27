#include <stdio.h>

struct User{
	char name[10];
	char phone[30];
}users[5]; 

void printuser(struct User u){
	printf("%s %s",u.name,u.phone);
}

int cmp(struct User a,struct User b){
	// 返回a.name>b.name的bool
	int i=0;
	for(;i<10;++i){
		if(a.name[i]>b.name[i]) {
			return 1;
		}else if(a.name[i]<b.name[i]){
			return 0;
		}else
			continue;
	}
	return 0;
}

int main(){
	int i,j;
	for(i=0;i<5;++i){
		scanf("%s%s",&users[i].name,&users[i].phone);
	}
	for(i=0;i<4;++i){
		for(j=0;j<4-i;++j){
			if(cmp(users[j],users[j+1])==1){
				struct User tmp=users[j];
				users[j]=users[j+1];
				users[j+1]=tmp;
			}
		}
	}
	for(i=0;i<5;++i){
		printuser(users[i]);
		if(i!=4)printf("\n");
	}
	return 0;
}