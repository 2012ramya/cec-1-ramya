#include <stdio.h>
void main()
{
    int rows;
    printf(" enter the number of rows (odd number):");
    scanf("%d", &rows);
    printf(" dimond pattern with star:\n:");
    for (int i = 1; i <= rows; i = i + 2)
    {
        for (int space = 1; space <= (rows - i) / 2; space++)
        {
            printf("  ");
        }
        for (int j = 1; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    for (int i = rows - 2; i >= 1; i = i - 2)
    {
        for (int space = 1; space <= (rows - i) / 2;
             space++)
        {
            printf("  ");
        }
        for (int j = 1; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}
    