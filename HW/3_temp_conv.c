/*
To make a temp convertor from farenheight to celcius or vice versa using functions, 
define function for celcius to f convertion and for f to c conversion
*/

#include <stdio.h>
float c_to_f(float a){
    return (a*1.8)+32;
}
float f_to_c(float b){
    return (b-32)*(5/9);}

int main() {
    float x;
    int d=248;
    printf("\nInput the temperature to be converted\n");
    scanf("%f",&x);
    char o;
    printf("\nInput c for C-->F conversion and f for F-->C conversion\n");
    scanf(" %c", &o);

    if (o=='c')
    {
        printf("\n%f %cC is equal to %f %cF\n",x,d, c_to_f(x),d);
    }
    if (o=='f')
    {
        printf("\n%f %cF is equal to %f %cC\n",x,d,f_to_c(x),d);
    }
    return 0;
}
