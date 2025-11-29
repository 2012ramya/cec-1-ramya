#include<stdio.h>
void main(){
    int operation;
    int num1,num2;

    do{
         printf(" enter any 2 numbers:");
         scanf("%D %d",&num1,&num2);
      printf("select ant arthimetic operation :\n:");
     printf("1. addition \n");
     printf("2. subtraction \n");
     printf("3. multipliction \n");
     printf("4. division for quotient \n");
     printf("5. division for reminder \n");
     printf("6. exit \n");
     scanf("%d",&operation);
    

 switch(operation)
     {
        case 1 : 
     printf("sum of %d & %d: %d\n",num1,num2,num1+num2);
    break;
     case 2 : 
     printf("product of %d & %d: %d\n",num1,num2,num1*num2);
    break;
     case 3 : 
     printf("quotient of %d & %d: %d\n",num1,num2,num1/num2);
    break;
    case 4 : 
     printf("difference of %d & %d: %d\n",num1,num2,num1-num2);
    break;
        case 5 : 
     printf("module of %d & %d: %d\n",num1,num2,num1%num2);
    break;
     case 6 : 
     printf("thank you for using the calculater");
    break;
    default:
    printf("invalid operation");
    
    break;
     }
      } while(operation !=6);

     }


         
