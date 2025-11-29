#include<stdio.h>
int main(){

    int size, ar[50], largest = 0,
    second = 0, smallest = 0, total = 0 ,avg = 0;

    printf("enter the number of elememts: ");
    scanf("%d", &size);

    printf("enter any %d elements: ", size);
    for (int i=0; i<size; i++){
    scanf("%d", &ar[i]);
   }
    printf("the array elements are as follow: \n");
    for (int i = 0; i < size; i++){
    printf(" %d\n",  ar[i]);
 }
  largest = ar[0];
   for(int i = 0; i < size; i++)
{
    total = total = ar[i];
     if (ar[i]>largest)
    {
        largest = ar[i];
    }
}
}
    