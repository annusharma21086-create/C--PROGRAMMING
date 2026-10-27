#include<stdio.h>

int main(){
    int a = 5;   
    int b = 2;
    int sum = a+b;
    printf("the sum is %d\n",sum);
    printf("the diff is %d\n",a-b);
    printf("the multiplication is %d\n",a*b);
    printf("the division is %d \n",a/b);//only return integer value 2 not 2.5
    return 0;
}