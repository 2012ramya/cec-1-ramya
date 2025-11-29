#include<stdio.h>
void main(){
    int size, arr[50];
    printf("enter the number of element:");
    scanf("%d",&size);
   printf(" enter any %d elements :",size);
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);

    }
    printf("the array element are as follows :\n");
    for(int i=0;i<size;i++){
        printf("element %d : %d\n",i,arr[i]);
        
    }
}