#include<stdio.h>

int main(){
    int n;
    printf("enter the value of n:");
    scanf("%d",&n);
    int factorial = 1;
    //5! = 1x2x3x4x5
    for(int i = 1;i<=n;i++){
        factorial = factorial*i;
        printf("the factorial of %d given terms is %d\n",i,factorial);
    }
    
    return 0;
}