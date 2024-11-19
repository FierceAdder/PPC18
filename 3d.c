#include <stdio.h>

void main(){

	char uname[100];
	float unitcons,charge=100,surcharge=0;
	int unum;	
		
	printf("Enter your name : ");
	scanf("%s",&uname);
	printf("Enter User Number : ");
	scanf("%d",&unum);
	printf("Enter Number of units used : ");
	scanf("%f",&unitcons);
	
	if (unitcons<=200)
		charge+=unitcons*0.8;
	else if(unitcons<=300)
		charge+=200*0.8+(unitcons-200)*0.9;
	else
		charge+=200*0.8+(unitcons-200)*0.9+(unitcons-300)*1;
	
	if(charge>400)
		surcharge=charge*0.15;
	
	printf("\n\tElectricity Bill\n");
	printf("Customer Name\t\t %s",uname);
	printf("\nCustomer ID\t\t %d",unum);
	if(charge>400){
		printf("\nCharges\t\t\t Rs.%.2f",charge);
		printf("\nSurcharge\t\t Rs.%.2f",surcharge);
		printf("\nTotal Charges\t\t Rs.%.2f\n",(charge+surcharge));
	}
	else
		printf("\nCharges\t\t Rs.%.2f\n",charge);
}
