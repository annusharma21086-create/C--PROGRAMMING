//take any year input and wap to determine whether the year is a leap year or not.
#include<stdio.h>

int main(){
    int year ;
    printf("enter the value of year:");
    scanf("%d",&year);
    if(year%4==0){
        printf("the year is leap year");

    }
    else{
        printf("this is not leap year");
    }
    return 0;
} 