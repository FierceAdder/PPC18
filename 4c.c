#include<stdio.h>
void main()
{
    int i,fact=1,number;
    printf("Enter a number: ");
    scanf("%d",&number);
    for(i=1;i<=number;i++)
        fact=fact*i;
    printf("Factorial of %d is: %d",number,fact);
}
/*Recursion : 
#include<stdio.h>
long factorial(int n)
{
    if (n == 0)
        return 1;
    else
        return(n * factorial(n-1));
}

void main()
    int number;
    long fact;
    printf("Enter a number: ");
    scanf("%d", &number);
    fact = factorial(number);
    printf("Factorial of %d is %ld\n", number, fact);
    return 0;
}*/