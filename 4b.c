#include <stdio.h>

void main(){
	int sum=0,unum,temp;
	printf("Enter a Number : ");
	scanf("%d",&unum);
	
	while(unum>0){
		temp=unum%10;
		sum+=temp;
		unum/=10;
	}
	
	printf("Sum of digits = %d \n",sum);
	
}

