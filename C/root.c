#include<stdio.h>


int main(){


   auto float number, temp=0.0,sqrt;

    printf("enter number");

    scanf("%f",&number);

    sqrt=number/2;

    while(sqrt!=temp){
        temp=sqrt;

        sqrt=(number/temp+temp)/2;
    }

    printf("%f",sqrt);

}