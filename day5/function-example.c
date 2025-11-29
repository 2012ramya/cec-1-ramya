#include<stdio.h>

void mycollege(){
    printf("city engineering college");
}
void mybranch(char branch[20]){
    printf("i am studing at %s branch!\n", branch);
}

void welcomeMe(char  fname[20],char lname[20]){
    printf("hi %s %s ,welcome to cec college", fname,lname);

}

void findsum(int a,int b){
    printf("sum of %d and%d :%d\n",a,b,a+b);

}
    
void main (){
    mycollege();
    mybranch("computer science");
    mybranch("information science");
    mybranch("civil engineering");
    welcomeMe("ramya","yadav");
    welcomeMe("ramya","yadav");
    findsum(20,30);
    findsum(30,40);
    

}


