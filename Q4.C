/*TAKE FLOAT INPUT AND PRINT THE FRACTIONAL PART OF THE REAL NUMBER */
#include<stdio.h>

int main(){
    float x;
    printf("enter the value of x:");
    scanf("%f",&x);
    int y;
    y = x;
    float z = x-y;
    printf("the decimal value of x is %f",z);
    return 0 ;
}