#include<stdio.h>

int main(){
    int n;
    printf("enter the value of n:");
    scanf("%d",&n);
    //1-2+3-4+5-6+7.....
    int sum =0;
    for(int i=1;i<=n;i++){
        if(i%2==0)sum = sum -i;
        else if(i%2!=0)sum = sum+i;
    }
    printf("the sum of given series is %d",sum);
    return 0;
}