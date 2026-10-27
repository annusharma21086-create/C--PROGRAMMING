#include<stdio.h>
 
int main(){
    int side;
    
    printf("enter the side of a square:");
    scanf("%d",&side);
    int area = side*side;
    
    printf("the area of square is=%d",area);
    return 0 ;
}