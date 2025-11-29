 #include<stdio.h>
 void main ()
 {
    int num,even=0,odd=0,rem=0;
    printf("entre any number:");
    scanf("%d", &num);
    printf("given number: %d\n", num);


    while (num>0)
    {
        rem =num% 10;
        if 
        (rem %2==0){
            even +=rem;
        } else{
            odd+=rem;
        }
   num=num/10;
    }
    printf("sum of even digits:%d\n", even );
    printf("sum of odd digits: %d\n", odd);
 }
 // tracing :
 // num = 1234 , even =0 ,odd=0, rem=0
 // step 1 1234 >0- t
 // rem = num% 10=> 1234% 10=> 4
 // 4 % 2== 0 -t
 // even = even + rem => 0+ 4=> 4
 // num =num / 10=> 1234/ 10=> 123
  // step 2 123 >0- t
 // rem = num% 10=> 123% 10=> 3
 // 3 % 2== 0 -f
 // 3%2 ! =0-t
 // odd= odd+ rem => 0+ 3=> 3
 // num =num / 10=> 1234/ 10=> 123
  // step 3 123 >0- t
 // rem = num% 10=> 123% 10=> 3
 // 3 % 2== 0 -f
 // 3%2 ! =0-t
 // odd= odd+ rem => 0+ 3=> 3
 // num =num / 10=> 1234/ 10=> 123
 

