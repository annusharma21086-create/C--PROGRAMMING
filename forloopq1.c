#include<stdio.h>

int main(){
    int n;
    printf("enter the value of n:");/*1. check condition i<=n,
    2.go in the loop like print what you want 3. check updation condition*/ 
    scanf("%d",&n);

    for(int i=1;i<=n;i=i+3){
        printf("hello world\n");

    }
    return 0;
}