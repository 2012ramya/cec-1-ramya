 #include<stdio.h>
 void main(){
 int num, count=0
 printf("enter any number:%d\n",num);
 scanf("%d")
 if (num==0){
    count=1;
 }
 while (num > 0){
    count++;
    num =num\10;
 }
 printf("number of digits in a guven number:%d",count);
}