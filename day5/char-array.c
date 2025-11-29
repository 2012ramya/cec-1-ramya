#include<stdio.h>
void main(){
    int size;
    char name[20];

    printf("enter  the number of characters in your first name :");
    scanf("%d", &size);

    for(int i=0;i<size;i++){
         scanf(" %c", &name[i]);
    }
    printf("you've entered :\n");
    for(int i=0 ; i<size; i++){
        printf("%c", name[i]);
    }
    }
    // in character array we will end it using \0 or null character
    // example
    //namr[10] = {'R','A,'M','Y','A','\0'}
