#include<stdio.h>
int findsquarearea(int length){
    return length*length;

}

int findrectangle(int length,int breadth,int height){
    return length*breadth*height;
}

void main(){
    printf(" area of square 1: %d\n", findsquarearea(123));
    printf(" area of square 2: %d\n", findsquarearea(123));


    printf(" area of rectangle 1: %d\n", findrectanglearea(20,50));
    printf(" area of rectangle 2: %d\n", findrectanglearea(30,40));


    printf(" area of cube 1: %d\n", findcubearea(10,20,30));
    printf(" area of cube 2: %d\n", findcubearea(12,24,30));
}