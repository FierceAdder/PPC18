#include <stdio.h>

#define ASIZE 5

void main(){
	int sqarr[ASIZE];
	for(int i=0;i<ASIZE;i++)
		sqarr[i]=i*i;
	printf("Element\t\tSqaure");
	
	for(int i=0;i<ASIZE;i++){
		printf("\n   %d\t\t   %d",i,sqarr[i]);	
	}	
}
