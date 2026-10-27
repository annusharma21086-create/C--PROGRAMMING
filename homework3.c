#include<stdio.h>

int main(){
    float principal,rate,time,simpleinterest;
    printf("principal:");
    scanf("%f",&principal);
    printf("rate:");
    scanf("%f",&rate);
    printf("time:");
    scanf("%f",&time);
    simpleinterest =( principal*rate*time)/100;
    printf("the simpleinterest is:%d",simpleinterest);
    return 0;
}