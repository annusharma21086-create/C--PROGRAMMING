#include<stdio.h>
int main(){
    int x,y;
    printf("enter the value of x and y:");
    scanf("%d %d",&x,&y);
    if((x==0)&&(y==0)){
        printf("point lies on the origin");
    }
    else if(x==0){
        printf("point lies on the y axis");
    }
    else{
        printf("point lies on the x axis");
    }
    return 0;
}