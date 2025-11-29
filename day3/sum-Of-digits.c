#include <stdio.h>
void main(){
    int num,sum=0;

    printf("enter  any number:");
    scanf("%d",&num);
    printf("orginal number:%d\n",num);

     while(num> 0){
       sum=sum +num % 10;
        num =num / 10;

     }
      printf(" sum of the given digits :%d", sum);

      // tracing :
      //num =13579
      //sum =0 (s)
      // step 1: 13579 >0 -T
      // s=s + n % 10 => s= 0 + 13579 % 10=>
      0 +9 =9
      //n =13579 / 10=> 135

      // step 2:  13579 >0 -T
      // s=s + n % 10 => s= 0 + 13579 % 10=>
      0 +9 =9
      //n =13579 / 10=> 135
 // step 3:  13579 >0 -T
      // s=s + n % 10 => s= 0 + 13579 % 10=>
      0 +9 =9
      //n =13579 / 10=> 135


      
}