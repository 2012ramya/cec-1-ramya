#include <stdio.h>
void main()
{
    int size, arr[50], sum=0;
    printf(" enter the number of elements :");
    scanf("%d", &size);

    printf(" enter any %d elements :", size);
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("the array element are as follows :\n");
    for (int i = 0; i < size; i++)
    {
        printf("%d\n", arr[i]);
    }
    for (int i = 0; i < size; i++)
    {
        sum = sum + arr[i];
    }
    printf("the sum of array elements :%d", sum);
}
