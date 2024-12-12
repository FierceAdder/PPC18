#include<stdio.h>

void main(){
	int order;
	printf("Enter the order of the matrix : ");
	scanf("%d",&order);
	int a[order][order],at[order][order];
	printf("Enter the values for matrix :::"); 
	for (int i=0;i<order;i++){
		for(int j=0;j<order;j++){
			printf("Enter the value for element %d,%d: ",i+1,j+1);
			scanf("%d",&a[i][j]);
		}
	}
	for (int i=0;i<order;i++){
		for(int j=0;j<order;j++){
			at[j][i]=a[i][j];
			
		}
	}
	for (int i=0;i<order;i++){
		for(int j=0;j<order;j++){
			printf("%d  ",a[j][i]);
			
		}
		printf("\n");
	}
	
	for (int i=0;i<order;i++){
		for(int j=0;j<order;j++){
			printf("%d  ",at[j][i]);
			
		}
		printf("\n");
	}
}
