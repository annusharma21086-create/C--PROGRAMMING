//to calculate the area of rectangle is greater it's perimeter or not
#include<stdio.h>
int main(){
    int l,b;
    printf("enter the value of length:");
    scanf("%d",&l);
    printf("enter the value of breadth:");
    scanf("%d",&b);
    int area = l*b;
    int perimeter = 2*(l+b);
    if(area>perimeter){
        printf("the area of rectangle is greater than perimeter");
    }
    if(area==perimeter){
        printf("both are equal");
    }
    else{
        printf("the perimeter is greater than area");
    }
    return 0;
}