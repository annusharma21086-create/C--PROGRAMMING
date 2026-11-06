//print solid square
#include<stdio.h>

int main(){
    //we take same variable for for square
    //because no of rows and no. of column are same
    int n;
    printf("enter the value of n:");
    scanf("%d",&n);
    for(int i=1;i<=4;i++){
        for(int i=1;i<=n;i++){
            printf("*");
        }
        printf("\n");

    }
    return 0;
}