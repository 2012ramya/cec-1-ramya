#include <stdio.h>
void main()
{
    int size, arr[50] ;
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
    printf("even number in the given array :\n");
    for (int i = 0; i < size; i++)
    {
        if(arr[i]%2==0){
            printf("%d",arr[i]);
        }
    }
    printf(" odd number in the given array :\n");
     for (int i = 0; i < size; i++)
    {
        if(arr[i]%2==0){
            printf("%d",arr[i]);
        }
    }
}
