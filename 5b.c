#include <stdio.h>

void main(){
	int arr[10]={0,1,2,3,4,5,6,7,8,9},sum=0;
	float avg=0;
	for(int i=0;i<10;i++)
		sum+=arr[i];
	avg=(float)sum/10;
	printf("Average of all the values in array = %.2f\n",avg);
}
