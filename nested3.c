#include<stdio.h>

int main(){
    int a,b,c;
    printf("enter the value of a,b,c:");
    scanf("%d%d%d",&a,&b,&c);
    if(a<b){
        if(a<c){
        printf(" a is the youngest one");}
        else{
            printf("c is the youngest onr");
        }}
    if(b<a){
        if(b<c){
            printf("b is the youngest one");
        }
        else{
            printf("c is the youngest one");
        }
    }    
    
    return 0;
}