#include <stdio.h>

void main(){
	int rows,count=1;
	printf("Enter the number of rows : ");
	scanf("%d",&rows);
	
	for(int i=0;i<rows;i++){
		for(int j=0;j<=i;j++,count++)
			printf("%d ",count);

		printf("\n");
	}
}
