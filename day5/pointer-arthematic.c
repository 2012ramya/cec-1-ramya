#include<stdio.h>
void main(){
    int n =20;

    int* nptr = &n;

    printf(" value of n:  %d  and address of n:%p\n",n, &n);
     printf(" referring  address of nptr : %p and nptr refers to the value  :%d\n", nptr,*nptr);

     *nptr= 30;
     printf("value  of n after changes : %d and adress of n :%p\n", n, &n);

     printf("value of n after adding 5 :%d\n", *nptr +5);
     printf("value of n after subtracting 8 :%d\n", *nptr -8);
     printf("value of n after divide 3 :%d\n", *nptr /3);

   
}