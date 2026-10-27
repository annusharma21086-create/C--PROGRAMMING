#include<stdio.h>

int main(){
    int a ,b;
    printf("enter the value of a:");
    scanf("%d",&a);
    printf("enter the value of b");
    scanf("%d",&b);
    int remainder = a%b;//%is used to find remainder 
    printf("the remainder is:%d",remainder);
    return 0;

}