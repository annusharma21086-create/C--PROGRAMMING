#include<stdio.h>//100,50,25.....

int main(){
    int n;
    printf("enter the value of n:");
    scanf("%d",&n);
    float a=100;
    for(int i=1;i<=n;i++){
        printf("%f\n",a);
        a = a/2;
    }
    return 0;
}