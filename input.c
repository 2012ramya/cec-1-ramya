 #include<stdio.h>
 int main (){
 int num;
 float decimal;
 char symbol;

 printf ("enter any integer value:");
 // for taking the input, we use scanf
 // =& - amperstand, it will store the adress of the varible
 scanf("%d" , &num);
 printf("enter any decimal value:");
 scanf("%f", &decimal);
 printf("enter any symbol:");
 scanf(" %c", &symbol);
 printf("you've given %d for integer, %f for float, %c for symbol", num,decimal,symbol);
}
