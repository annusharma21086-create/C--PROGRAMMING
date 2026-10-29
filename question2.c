#include<stdio.h>
// to find loss or profit
int main(){
    int sp,cp;
    printf("enter the value of sp and cp:");
    scanf("%d%d",&sp,&cp);

    if(sp>cp){
        printf("profit");
    }
    if(cp>sp){
        printf("loss");
    }
    else{
        printf("no profit and no loss");
    }
    return 0;
}