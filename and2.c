#include<stdio.h>

int main(){
    int x ;//where x is a positive 
    printf("enter the value of x:");
    scanf("%d",&x);

    if((x%5==0)&&(x%3==0)){
        printf("the x is divisible by 5 and 3");
    }
    else{
        printf("the x is not divisible by 5 and 3");
    }
    return 0;
}