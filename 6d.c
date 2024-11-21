#include <stdio.h>

void main(){
    int r,c,sall=0,scol=0;
    printf("Enter the no. of rows in matrix : ");
	scanf("%d",&r);
    printf("Enter the no. of columns in matrix : ");
	scanf("%d",&c);
    int m[r][c],srow[r];
    for (int i=0;i<r;i++){
        srow[i]=0;
		for(int j=0;j<c;j++){
			printf("Enter the value for element %d,%d: ",i+1,j+1);
			scanf("%d",&m[i][j]);
            sall+=m[i][j];
            srow[i]+=m[i][j];
		}
	}
    for (int i=0;i<r;i++,scol=0){
		for(int j=0;j<c;j++)
            scol+=m[j][i];
        printf("Sum of values in Column %d is : %d\n",i+1,scol);
    }
    for (int i=0;i<r;i++)
        printf("Sum of values in Row %d is : %d\n",i+1,srow[i]);
    printf("Sum of all elements in the Matrix is : %d\n",sall);
}