#include<stdio.h>
#include<ctype.h>

int main(void)
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
            if(islower(c))
            {
                printf("\nCharacter is lowercase.");
            }
        }
        if(isdigit(c)){
            printf("\nCharacter is numeric digit.");
        }
    }
    if(ispunct(c))
    {
        printf("\nCharacter is punctuation symbol.");
    }
    if(isspace(c))
    {
        printf("\nCharacter is blank space.");
    }
}