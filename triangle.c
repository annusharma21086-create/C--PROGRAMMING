/*take 3 numbers input and tell if they can be the sides of a triangle.*/

#include<stdio.h>

int main(){
    int a,b,c;
    printf("enter the value of a ,b and c:");
    scanf("%d%d%d",&a,&b,&c);
    if(((a+b)>c)&&((b+c)>a)&&((c+a)>b)){
        printf("the valid triangle");
    }
    else{
        printf("triangle is not valid");
    }
    return 0;
}