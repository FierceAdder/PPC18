#include<stdio.h>
#include <stdbool.h>

void main(){
	bool b=true;
	char c='A';
	float d=245.23;
	int i =3650;
	short s=78;
	
	printf("bool+char is char : %c\n",b+c);
	printf("int * short is int : %d\n",i*s);
	printf("float * char is float : %f\n",d*c);
	
	c+=b;
	d+=c;
	b=false;
	b=-d;
	
	printf("\n After Execution...\n");
	printf("float + char : %f\n",d);
	printf("bool=-float:%f\n",b);	
}

