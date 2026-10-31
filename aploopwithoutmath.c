#include<stdio.h>

int main(){
    int n;
    printf("enter the value of n:");
    scanf("%d",&n);
    //4,7,10,13.....
    //we are going to use extra veriable
    int a=4;
    for(int i=1;i<=n;i++){
        printf("%d\n",a);
        a = a+3;
    }
    return 0;
}