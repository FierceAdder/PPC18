#include<stdio.h>
#include<ctype.h>

void main()
{
    char c;
    printf("Enter the character: ");
    scanf("%c",&c);
    if(isalnum(c))
    {
        if(isalpha(c))
        {
            if(isupper(c))
                {
                    printf("\nCharacter is uppercase.");
                }
            else
                printf("\nCharacter is lowercase.");
        }
        else
            printf("\nCharacter is numeric digit.");
    }
    else if(ispunct(c))
        printf("\nCharacter is punctuation symbol.");
    else
        printf("\nCharacter is blank space.");
}