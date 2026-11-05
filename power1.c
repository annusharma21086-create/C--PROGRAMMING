
#include<stdio.h>
#include<math.h>

int main(){
    int a;
    printf("enter base");
    scanf("%d",&a);
    int b;
    printf("enter power");
    scanf("%d",&b);
    
    int power = 1;
    for(int i = 1;i<=b;i++){
        power = power*a;
        printf("%d raised to the power %d is %d\n ",a,b,power);
        
    }
    
    
    return 0;
    
}