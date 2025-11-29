#include<stdio.h>
void main(){
     int month ;
      printf(" enter  any number b/w 1 to  12 :");
      scanf("%d", &month);

       switch(month){
         // for checking multiple condition we use switch condition
         // why break is needed for each case ?
         // to stope the iteration 
         case 1:
         printf("month 1 : january");
         break;
         case 2:
         printf("month 2 : feburary");
         break;
         case 3:
         printf("month 3 : march");
         break;
        case 4:
         printf("month 4 : april");
         break;
        case 5:
         printf("month 5 :may");
         break; 
         case 6:
         printf("month 6 :june");
         break; 
         case 7:
         printf("month 7 :july");
         break; 
         case 8:
         printf("month 8 :auguest");
         break; 
          case 9:
         printf("month 9 :september");
         break; 
         case 10:
         printf("month 10 :october");
         break; 
          case 11:
         printf("month 11 :november");
         break;
          case 12:
         printf("month 12 :december");
         break;
         default:
         printf(" invalid input !");
          break;
       }
    }