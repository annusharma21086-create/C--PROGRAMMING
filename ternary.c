#include<stdio.h>

int main(){
    int a ;
    printf("enter the value :");
    scanf("%d",&a);
    a%2==0 ? printf("even"):printf("odd"); //ternary operator 
    return 0;
}