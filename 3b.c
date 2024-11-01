#include <stdio.h>
#include <stdbool.h>

void main(){
    int marks;
    bool flag=true;
    // printf("Enter the marks :  ");
    // scanf("%d",&marks);
    // printf("Grade : ");
    while (flag==true){
        printf("Enter the marks :  ");
        scanf("%d",&marks);
        printf("Grade : ");
        switch((int)(marks/10))
        {
            case 10:
                printf("o,Full Score!!!\n");
                flag=false;
                break;
            case 9:
                printf("A\n");
                flag=false;
                break;
            case 8:
                printf("B\n");
                flag=false;
                break;
            case 7:
                printf("C\n");
                flag=false;
                break;
            case 6:
                printf("D\n");
                flag=false;
                break;
            case 5:
                printf("E\n");
                flag=false;
                break;
            case 4:
                printf("F , \a FAILED!!!\n");
                flag=false;
                break;
            default:
                printf("\b\b\b\b\b\b\b\bError : Marks entered greater than 100.\nGO AGAIN ");
                flag=true;
                break;

        }
    }
}
