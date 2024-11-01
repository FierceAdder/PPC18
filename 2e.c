#include <stdio.h>

#define QUIZ_WEIGHT 30
#define MIDTERM_WEIGHT 40
#define FINAL_WEIGHT 30
#define QUIZ_MAX 400.00
#define MIDTERM_MAX 200.00
#define FINAL_MAX 100.00

void main(){
	int quiz[5];
	int temp=0;
	int midterm[3];
	int final;
	float percent[4];
	
	for(int i=0;i<=3;i++)
	{	
		printf("Enter the score of quiz %d : ",(i+1));
		scanf("%d",&quiz[i]);
		temp+=quiz[i];}
	quiz[4]=temp;
	temp=0;
	for(int i=0;i<=1;i++)
	{	
		printf("Enter the score of Midterm %d : ",(i+1));
		scanf("%d",&midterm[i]);
		temp+=midterm[i];}
	midterm[2]=temp;
	
	printf("Enter the score of final exam : ");
	scanf("%d",&final);
	percent[0]=(float)quiz[4]*QUIZ_WEIGHT/QUIZ_MAX;
	percent[1]=(float)midterm[2]*MIDTERM_WEIGHT/MIDTERM_MAX;
	percent[2]=(float)final*FINAL_WEIGHT/FINAL_MAX;
	percent[3]=percent[0]+percent[1]+percent[2];
	
	for(int i=0;i<=3;i++)
	{	
		printf("score of quiz %d : %d\n",(i+1),quiz[i]);
	}
	printf("Total score of quizzes : %d\n",quiz[4]);
	
	for(int i=0;i<=1;i++)
	{	
		printf("score of Midterm %d : %d\n",(i+1),midterm[i]);
	}
	printf("Total score of MidTerms : %d\n",midterm[2]);
	printf("score of final: %d\n",final);
	
	printf("quiz %6.1f\n",percent[0]);
	printf("midterm %6.1f\n",percent[1]);
	printf("final %6.1f\n",percent[2]);
	printf("total %6.1f\n",percent[3]);
}
