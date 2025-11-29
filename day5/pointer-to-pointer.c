#include<stdio.h>
void main(){
     int  num =50;
     //normal pointer(integer pointer)
     int* numptr= &num;
     // double pointer or pointer to pointer
     int** dptr= &numptr;
     *numptr=20;

     printf(" num value :%d and it is present  at: %p\n:",num, &num);
     printf("numptr refers to :%p and it has value : %d and it is present at %p\n",numptr,*numptr,&numptr);
    printf("dptr refers to:%p and it has value :%p\n",dptr,*dptr);
    printf("dptr can directly access num value : %d ",**dptr);
    
}
//variable =value[adress]
// num=50[1000]
//numpointer is referint to num
//numpointer=1000[1100]
//*numptr=50,numptr=1000(adress of num)
//dptr=1100[1200]

//dptr =1100(adress of numptr),*dptr=1000(adress reffered by numptr), **dptr =50 (value referd by numptr)
