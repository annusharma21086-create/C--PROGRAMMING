#include<stdio.h>

int main(){
    int n;
    printf("enter the value of n :");
    scanf("%d",&n);
    if(n>10){
        printf("the number is greater than 10");
    }
    if(n<10){
        printf("the number is less than 10");
    }
    if(n==10){
        printf("both are equal");
    }
   
    return 0;
}