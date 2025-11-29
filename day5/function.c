#include<stdio.h>
void greet(){
    printf("good morning students!\n");

}
void sayhello();

void main(){
    greet();
    greet();
    greet();
    sayhello();
}
void sayhello(){
    printf("hello students!");
}
