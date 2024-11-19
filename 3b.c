#include <stdio.h>
#include <stdbool.h>

void main(){
    int marks;
    printf("Enter the marks :  ");
    scanf("%d",&marks);
    printf("Grade : ");
    switch((int)(marks/10))
    {
        case 10:
            printf("o,Full Score!!!\n");
            break;
        case 9:
            printf("A\n");
            break;
        case 8:
            printf("B\n");
            break;
        case 7:
            printf("C\n");
            break;
        case 6:
            printf("D\n");
            break;
        case 5:
            printf("E\n");
            break;
        case 4:
            printf("F , \a FAILED!!!\n");
            break;
        default:
            printf("\b\b\b\b\b\b\b\bError : Marks entered greater than 100.\nGO AGAIN ");
            break;
    }
}