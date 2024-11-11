#include<stdio.h>

void main(){
	int a=5,b=7,c=9,x,y;
	printf("initial values of variables are : ");
	printf("\na: %d\nb: %d\nc: %d\n",a,b,c);
	x=a*4+b/2-c*b;
	printf("value of the expression a*4+b/2-c*b : %d\n",x);
	y=--a*(3+b)/2-c++*b;
	printf("value of the expression --a*(3+b)/2-c++*b : %d\n",y);
	printf("values of the variables now : ");
	printf("\na: %d\nb: %d\nc: %d\n",a,b,c);
}

