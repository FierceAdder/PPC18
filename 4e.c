#include <stdio.h>
void main(){
	int num,b_num,d_num=0,base=1,rem;
	printf("Enter a binary number with the combination of 0s & 1s : ");
	scanf("%d",&num);
	b_num=num;
	while (num>0){
		rem=num%10;
		d_num+=rem*base;
		num/=10;
		base*=2;		
	}
	printf("The binary number is %d\nThe decimal number is %d  ",b_num,d_num);
}
