int main(){
    int x;
    printf("enter the value of x:");
    scanf("%d",&x);
    if((x%3==0)||(x%5==0)){
        if(x%15!=0){
            printf("the no. is divisible by 3 and 5 but not 15.");
        }
        else{
            printf("the no. is divisible by fifteen");
        }
    }
    else{
        printf("the number is not divisible by 3 and 5");
    }
    return 0; 
}