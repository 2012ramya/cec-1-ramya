#include<stdio.h>
void main(){
    int marks;
     printf(" enter your marks ");
     scanf("%d", &marks);
     if( marks > 35 && marks < 60){
        printf("you've passed the exam !");
      } else if (marks >= 60 && marks < 70){
            printf("you've got B grade !");
      }else if (marks >= 70 && marks < 85){
            printf("you've got A grade !");
       } else if (marks >= 85){
          printf("you've got distinction!"); 
            } else{
                printf(" you've failed in  the exam !please try again");

            }
    
     
}