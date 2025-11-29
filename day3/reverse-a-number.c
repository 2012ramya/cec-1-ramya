#include<stdio.h>
void main(){
   int num,rev=0, rem=0;
    printf(" enter any number :");
    scanf("%d", &num);

    printf(" orginal number: %d\n ",num);

    while (num >0){
         rem =num %10;
         rev =rev*10+ rem ;
         // rev =rev *10+num %10;
         num =num /10;

    }
    printf(" reversed number: %d", rev);
    
    //


}