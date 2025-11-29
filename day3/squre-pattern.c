#include<stdio.h>
void main(){
    int rows,i;

    printf("enter number of rows:");
    scanf("%d", &rows);

    printf("square pattern: \n");
    // for(intialization , condition, increment or decrement
    // nested for loop
    for(int i=1; i <= rows; i++){
        // if  we print a symbol , it will print 
        // if we print a j value .wewill get numbers in horizontal pattern 
        // if we print a i value, we will get number in vertical pattern
        // printf("*");
        printf("%d ",j);
        
        for(int j =1; j<=rows; j++){
        printf("*");
        }
    printf("\n");
    }
}