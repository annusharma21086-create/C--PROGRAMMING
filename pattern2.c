#include<stdio.h>

int main(){
    int n,a;
    printf("enter the value of n and a: ");
    scanf("%d%d",&n, &a);
    for(int i=1;i<=n;i++){//no of rows
        for(int i=1;i<=a;i++){//no of column
            printf("*");
        }
        printf("\n");
    }
    return 0;
//print a rectangle or anything you want...

}