#include<stdio.h>

int main(){
    int n;
    printf("enter the value of n:");
    scanf("%d",&n);
    //1 - 2 + 3 - 4 + 5 -6 + 7.....
    int sum = 0;
    if(n%2==0){
        sum = -n/2;
//odd numbers k liye -n/2+n formula h 
//even numbers k liye -n/2 formula h
    }
    else{
        sum = -n/2 +n;
    }
    printf("the sum of series is :%d",sum);
    return 0;
}