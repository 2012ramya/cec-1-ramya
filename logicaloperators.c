// Ctrl +?
// AND(&&), OR(||), NOT(!)
// AND:
//  A B Result
//  0 o o
//  0 1 0
//  1 0 0
//  1 1 1
//  ---------- 
// OR (+):
// A B result
// 0 0 0
// 0 1 1
// 1 0 1
// 1 1 1
//----------
// NOT(TOGGLE):
// A Result
// 0 1
// 1 0

#include <stdio.h>
  void main(){
    int number =10;
    int number2 =20;
    if(number >5 && number <20){
        printf("%d id b/w 5 & 20", number);
    }
    if (number2 > 5 && number2 < 20){
        printf("%d is b/w  5 & 20", number2);

    }else {
        printf("%d is not b/w 5 & 20", number2);
    }
    }


