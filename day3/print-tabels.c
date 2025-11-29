#include<stdio.h>
void main(){
    int num ,i =1;
    printf(" enter  the  number to print the tabels :");
    scanf("%d", &num);

    printf( " the tabels for the number are as  follows :\n");
     while( i<= 10){
         printf("%d x%d =%d \n", num,i, num * i);
         i++;
     }
}
// tracing :
 //  num = 5 , i=1
 // step 1: i<= 10 => 1
 // num x i = num* i => 5 x 1=5 
 // i++ => 1++
  // step 2: i = 2
  // i<= 10
 // num x i = num* i => 5 x 1=5 
 // i++ => 1++