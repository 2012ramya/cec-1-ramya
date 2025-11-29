#include<stdio.h>
#include<string.h>

void main(){
    char fname[20],lname[20],copyname[20],fullname[20];

    printf("enter your first name:");
    fgets(fname,sizeof(fname),stdin);

    printf("your first name is %s\n",fname);

    printf("enter your last name :");
    fgets(lname,sizeof(lname),stdin);

    printf("your last name is %s\n", lname);

    strcat(fullname,fname);
    strcat(fullname,lname);

    printf("your fullname is %s\n",fullname);

    printf("your name contains %d xharacters/n",strlen(fullname));

    strcpy(copyname,fullname);
    printf("copied name: %s\n",copyname);


}
