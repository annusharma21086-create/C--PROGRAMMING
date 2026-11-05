/*WRITE a program to print all the ASCII values and their equivalent character of 26 alphabets
using a while loop*/
#include<stdio.h>

int main(){
    for(int i = 65;i<=90;i++){
        char ch=(char)i;
        printf("%c %i\n",ch,i );
    }
    return 0;
}