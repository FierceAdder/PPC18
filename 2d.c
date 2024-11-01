#include<stdio.h>

#define TAX_RATE 8.50

void main(){
	int qty;
	float discount_rate,discount_amt,unit_price,subtotal,subtaxable,taxamt,total;
	
	printf("Enter the number of items sold : ");
	scanf("%d",&qty);
	
	printf("Enter the unit price : ");
	scanf("%f",&unit_price);
	
	printf("Enter the discount rate (percent) : ");
	scanf("%f",&discount_rate);
	
	subtotal=unit_price*qty;
	discount_amt=(subtotal*discount_rate)/100;
	subtaxable=subtotal-discount_amt;
	taxamt=(subtaxable* (TAX_RATE))/100;
	total=subtaxable+taxamt;
	
	printf("Quantity sold\t\t%d",qty);
	printf("\nUnit Price\t\t%6.2f",unit_price);
	printf("\n--------------------------------------------");
	printf("\nSubtotal\t\t%6.2f",subtotal);
	printf("\nDiscount\t\t%6.2f",discount_amt);
	printf("\nTaxable Amount\t\t%6.2f",subtaxable);
	printf("\nTax\t\t%6.2f",taxamt);
	printf("\nTotal\t\t%6.2f",total);
}
