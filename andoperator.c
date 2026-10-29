#include<stdio.h>

int main(){
    int x;
    printf("enter the value of x:");
    scanf("%d",&x);

    if((x>99)&&(x<1000)){//using the and operator
        printf("the x is a three digit number");
    }
    else{
        printf("another value enter");
    }
    return 0;
}