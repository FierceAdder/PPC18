#include <stdio.h>

void main(){
	int a,b;
	float rem,quo;
	printf("enter the dividend : ");
	scanf("%d",&a);
	printf("enter the divisor : ");
	scanf("%d",&b);
	rem=a%b;
	quo=a/b;
	printf("The quotient is : %.2f",quo);
	printf("\nThe remainder is : %.2f",rem);
}
