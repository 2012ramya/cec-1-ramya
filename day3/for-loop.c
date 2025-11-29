#include<stdio.h>
void main(){
    int num ;

    printf(" enter any number:");
    scanf("%d" ,&num);

    // syntax:
    //for(intialisation ;condition;increment/decrement)
    printf(" the numbers from 0 to %d :\n",num);
    for(int i =0;i <=num;i++){
    printf("%d\n",i);
}

}