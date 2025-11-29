#include<stdio.h>
void main (){
    int a[20]={ 2,4, 6,8,10};
    int*aptr =a; // refers to first element of array 

    int (*arrayptr)[20] =&a;
     //refers to entire array

    printf("array contains:\n");

    for(int i=0; i<5; i++){
        printf("%d\t",a[i]);

    }

    printf("\n address  of array :%p\n",&a);
    printf("aptr referring to  addresss :%p and address has the value: %d",aptr,*aptr);
    printf(" array pointer contains:\n");
    for(int i=0; i<5;i++){
        printf("%d",(*arrayptr)[i]);


    }

     printf(" value of a after adding 2 : %d\n", *aptr +2)
     printf(" value of aptr array after adding 2: %d\n", (*arrayptr)[1] +2);

     printf("adding 2 for each values of array pointer :\n ");
     for(int i=0;i<5;i++){
        (*arrayptr)[i] =(*arrayptr)[i] +2;

     }
      printf(" after adding , array pointer contains:\n ");
     for(int i=0;i<5;i++){
        printf("%d\t",(*arrayptr)[i] ;

     }
     



}