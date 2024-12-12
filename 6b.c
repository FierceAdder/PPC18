#include <stdio.h>

void main(){
	int order;
	printf("Enter the order of the matrix : ");
	scanf("%d",&order);
	int m1[order][order],m2[order][order],r[order][order]	;
	printf("For matrix 1 :::\n\n");
	for (int i=0;i<order;i++){
		for(int j=0;j<order;j++){
			printf("Enter the value for element %d,%d: ",i+1,j+1);
			scanf("%d",&m1[i][j]);
		}
	}
	printf("For matrix 2 ::\n\n");
	for (int i=0;i<order;i++){
		for(int j=0;j<order;j++){
			printf("Enter the value for element %d,%d: ",i+1,j+1);
			scanf("%d",&m2[i][j]);
		}
	}

	for(int i=0;i<order;i++)    
	{    
		for(int j=0;j<order;j++){    
			r[i][j]=0;    
			for(int k=0;k<order;k++){    
				r[i][j]+=m1[i][k]*m2[k][j]; 
			}    
		}    
	} 
	for (int i=0;i<order;i++){
		for (int j=0;j<order;j++){
			printf("%d ",r[i][j]);
		}
		printf("\n");
	}
}
