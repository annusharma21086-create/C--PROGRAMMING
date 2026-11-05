#include<stdio.h>

int main(){
    int n;
    printf("enter the value of n:");
    scanf("%d",&n);
    int a = 1;
    int b = 1;
    int next ;
    for (int i = 1;i<=n;i++){
        printf("the %dth fibonaccie term is %d\n",i,a);
        next = a+b;
        a=b;
        b=next ;
        
        
    }
     
    


    return 0;

}