#include<stdio.h>

float ctoF(float celcius){
    return(celcius* 9/5)+ 32;
}

float ftoc(float fahrenheit){
    return(fahrenheit-32)*5/9;
}


float ctok(float celcius){
    return celcius +273.15;
}


float ktoc(float kelvin){
    return kelvin -273.15;
}


void main(){
    float ctemp1,ctemp2,ftemp3,ftemp4,ktemp5,ktemp6;

    printf("enter 2 tempetature in calcius:");
    scanf("%f %f",&ctemp1,&ctemp2);

    printf("enter 2 tempetature in fahrenheit:");
    scanf("%f %f",&ftemp3,&ftemp4);

    printf("enter 2 tempetature in kelvin:");
    scanf("%f %f",&ktemp5,&ktemp6);

    printf("temperature conversions are as follows:\n");
    printf("1. celcius(%.2f) to fahrenheit(%.2f)\n",ctemp1,ctoF(ctemp1));
    printf("2. celcius (%.2f)to fahrenheit(%.2f)\n",ctemp2,ctoF(ctemp2));
    printf("3. fahrenheit (%.2f)to celcius(%.2f)\n",ftemp3,ftoc(ftemp3));
    printf("4. fahrenheit (%.2f)to celcius(%.2f)\n",ftemp4,ftoc(ftemp4));
    printf("5 celcius (%.2f)to kelivn(%.2f)\n",ctemp1,ctok(ctemp1));
    printf("6. celcius (%.2f)to kelvin(%.2f)\n",ctemp2,ctok(ctemp2));
    printf("7. kelvin (%.2f)to celcius(%.2f)\n",ktemp5,ktoc(ktemp5));
    printf("8. kelvin (%.2f)to celcius(%.2f)\n",ktemp6,ktoc(ktemp6));
}
