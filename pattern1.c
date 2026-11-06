/*a simple question to printing pattern and to build our logic
*****
*****
***** like this */
#include<stdio.h>

int main(){
    int n ;
    printf("enter the value of n: ");
    scanf("%d",&n);
    int a;
    printf("enter the value of a: ");
    scanf("%d",&a);

    for(int i =1;i<=n;i++){//outer loop ---no of lines
        for(int i=1;i<=a;i++){//inner loop-----no. of elements in a single line.
            printf("*");

        }
        printf("\n");
    }
    return 0;
}