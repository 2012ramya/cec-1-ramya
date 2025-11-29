#include<stdio.h>
void main(){

    char choice;
    do{
    printf("  choose any of the options:\n");
    printf(" 1. welcome!\n");
    printf("2 . good morning !\n");
    printf("3. good afternoon:\n");
    printf("4.good night:\n");
    printf("5. good bye :\n");
    scanf(" %c", &choice);


        switch(choice){
            case '1':
            printf(" welcome to c program IRP\n");
            break;
            case '2':
            printf("Good mornig students \n");
            break;
            case '3':
            printf("Good afternoon students \n");
            break;
            case '4':
            printf("Good night students \n");
            break;
            case '5':
            printf("Good bye students   \n");
            break;
            default:
            printf(" invalid choice ! try again");
            break;
          }
    } while (choice !='5');

}