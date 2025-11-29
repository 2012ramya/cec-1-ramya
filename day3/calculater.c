#include<stdio.h>
void main(){
    int num1, num2;
    char operator;

    printf(" enter any two numbers:");
    scanf("%d %d", &num1,&num2);
     printf(" choose the operators(+,-,*,/,%)");
     scanf(" %c",&operator);

     switch(operator)
     {
        case '+':
     printf("sum of %d & %d: %d",num1,num2,num1+num2);
    break;
     case '*':
     printf("product of %d & %d: %d",num1,num2,num1*num2);
    break;
     case '/':
     printf("quotient of %d & %d: %d",num1,num2,num1/num2);
    break;
    case '-':
     printf("difference of %d & %d: %d",num1,num2,num1-num2);
    break;
     case '%':
     printf("reminder of %d & %d: %d",num1,num2,num1%num2);
    break;
    default:
    printf("invalid operation");
    
    break;

     }
}