#include<stdio.h>

int main(){
    int a;
    printf("a=");
    scanf("%d",&a);
    int b;
    printf("b=");
    scanf("%d",&b);
    int c;
    printf("c=");
    scanf("%d",&c);
    if((a>b)&&(a>c)){
        printf("a is greater");
    }
    if((b>a)&&(b>c)){
        printf("b is greater");
    }
    if((c>a)&&(c>b)){
        printf("c is greater");
        
    }
    
    else{
        printf("all are greater");
    }
    return 0;
    
}