#include <stdio.h> 

int main(){
	float x,w,y;
	int a,b,c;
	scanf("%f %d %f %d %f %d",&x,&a,&y,&b,&w,&c); 
	printf("%f",((x*a)+(w*b)+(y*c))/(a+b+c));
	return (0);
}


