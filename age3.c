/*if the ages of ram shyam and ajay are input through the keyboard , write a program
to determine the youngest of the three */
#include<stdio.h>

int main(){
    int ram , sh,ajay;
    printf("enter the age of ram ,sh,ajay:");
    scanf("%d%d%d",&ram,&sh,&ajay);
    if((ram<ajay)&&(ram<sh)){
        printf("ram is the youngest");
    }
    if((sh<ram)&&(sh<ajay)){
        printf("shyam is the younger one");
    }
    if((ajay<ram)&&(ajay<sh)){
        printf("ajay is the younger one");
    }
  
    return 0;

}