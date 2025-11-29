#include<stdio.h>
void main(){
    int i=20;
    float f= 1.45;
    char ch ='a';

    // pointer declaration
    // syntax : datatype*pointer;
    int* iptr;
    float* fptr;
    char* cptr;

    // iptr will refer the address of integer i 
    iptr =&i;
    fptr =&f;
    cptr =&ch;

    printf(" variable i contains value :%d\n",i);
    printf("variable i is present at : %p\n",&i);
    printf("iptr refers to :%p\n",iptr);
     printf("iptr containsts :%d\n",*iptr);
     printf("iptr is present at:%p\n",&iptr);

      printf(" variable f contains value :%d\n",f);
    printf("variable f is present at : %p\n",&f);
    printf("fptr refers to :%p\n",fptr);
     printf("fptr containsts :%d\n",*fptr);
     printf("fptr is present at:%p\n",&fptr);

       printf(" variable ch contains value :%d\n",ch);
    printf("variable ch is present at : %p\n",&ch);
    printf("cptr refers to :%p\n",cptr);
     printf("cptr containsts :%d\n",*cptr);
     printf("cptr is present at:%p\n",&cptr);

}