#include<stdio.h>

int main(){
    int n,originalno;
    printf("enter a num.=");
    scanf("%d",&n);
    originalno = n;
    int r = 0;
    while(n>0){
        r =r*10;
        r = r+(n%10);
        n = n/10;
    }
    
    printf("the reversed of number is %d\n",r);
    int sum = originalno + r;;
    printf("the sum of originalno and reversed no is %d\n",sum);
    return 0;
}