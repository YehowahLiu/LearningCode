#include <stdio.h>
#define pi 3.1416
#define min(a,b) (((a)>(b))?(b):(a))
typedef double DB;

struct Circle{
	// 右下角坐标 
	DB x1;
	DB y1;
	// 左上角坐标 
	DB x2;
	DB y2;
}; 

int main(){
	struct Circle c;
	scanf("%lf%lf%lf%lf",&c.x1,&c.y1,&c.x2,&c.y2);
	DB r=min(c.x1-c.x2,c.y2-c.y1)/2;
	DB area=pi*r*r;
	printf("%g",area);
	return 0;
}