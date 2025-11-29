#include<stdio.h>
#include<string.h>

void main(){
    char name[20] ,fullname[20],completename[20],size;


    printf("enter your first name :");
    scanf("%s",&name);

    printf("your first name is %s\n", name);
    printf("enter your full name:\n");
    getchar();
    gets(fullname);

    printf("your name is %s\n", fullname);

    printf("enter your complete name again:");
    fgets(completename,sizeof(completename),stdin);
    printf("size of complete name array is %d\n",size of (complete name));
    printf("you name is %s\n", completename);
}