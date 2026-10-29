//example of nested if
#include<stdio.h>

int main(){
    int x;
    printf("enter the value of x:");
    scanf("%d",&x);
    if(x%3==0){
        if(x%5==0){
            printf("x is divisible by 3 as well as 5");
        }
        else{
            printf("not divi by 3 and 5");
        }
    }
    else{
        printf("not divisible by 3 and 5");
    }
    return 0;
}