#include <stdio.h>
void main()
{
    int number;
    printf(" enter any number:");
    scanf("%c", &number);
    // if statement
    if (number > 0)
    {
        printf("%c is postive number!", number);
    }
    else
    {
        printf("%c is negative number!\n", number);
    }
    // if else statement
    if (number > 0)
    {
        printf("%d is postive number!", number);
    }
    else
    {
        printf("%d is negative number!\n", number);
    }
    // if else ladder
    if (number > 0)
    {
        printf("%d is postive number!\n", number);
    }
    else if (number < 0)
    {
        printf("%d is negative number!\n", number);
    }
        else
        {
            printf("%d is not a number");
        }
    }
