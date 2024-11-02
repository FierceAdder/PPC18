#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

//functions
int GetOption(void){
    int option;
    printf("Choose a option :::\n1-Add\n2-Subtract\n3-Multiply\n4-Divide\n");
    scanf("%d",&option);
    return option;
}
float Add(float n1,float n2){return n1+n2;}
float Subtract(float n1,float n2){return n1-n2;}
float Multiply(float n1,float n2){return n1*n2;}

float Divide(float n1,float n2){
    float result=0;
    if (n2!=0)
        result=n1/n2;
    else{
        printf("Can't Divide by ZERO.\n");
        abort();
    }
    return result;
}

float MainCalc(int operator){
    float a,b,result;
    printf("Enter the 1st number : ");
    scanf("%f",&a);
    printf("Enter the 2nd number : ");
    scanf("%f",&b);
    switch(operator){
        case 1:
            result=Add(a,b);
            break;
        case 2:
            result=Subtract(a,b);
            break;
        case 3:
            result=Multiply(a,b);
            break;
        case 4:
            result=Divide(a,b);
        default:
            printf("Invalid Operator!!!");

    }
    return result;

}

void main(){
    printf("Welcome to the Calculator");
    bool flag=1;
    int opt;
    float result;
    do{
        opt=GetOption();
        result=MainCalc(opt);
        printf("Result = %.2f",result);
        printf("\n Do you want to continue?\n(1-yes , 2-no)\n");
        scanf("%d",&flag);
        if (flag!=1)
            flag=0;

    }while(flag==1);

}