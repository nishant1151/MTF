#include<stdio.h>

int main(){

    // calculate simple interest
    // int a,b,c;
    // float d;
    // printf("enter ammount=");
    // scanf("%d",&a);
    // printf("/enter Interest=");
    // scanf("%d",&b);
    // printf("enter time in years=");
    // scanf("%d",&c);

    // d=(a*b*c)/100;
    // printf("%f",d);

    // temperature converter

    // int cel;
    // float temp;

    // printf("enter temperature in celcius=");
    // scanf("%d",&cel);

    // temp=(cel*(9/5))+32 ;
    


    // swapping of numbers

    // int a,b,temp;
    // a=25;
    // b=30;
    // // temp=a;
    // // a=b;
    // // b=temp;
    // temp=a+b;
    // a=temp-a;
    // b=temp-b;
    // printf("value of a is %d,value of b is %d",a,b);


    // sum pf total digits

    int a,b,c,d,e,f,g,h,i;
    

     printf("enter 3 digit number=");
    scanf("%d",&a);
    // a=752;
    b=a%10;
    c=a-b;
    d=a/10;
    e=d%10;
    f=d-e;
    g=f/10;


    h=g+e+b;





    printf("%d\n",h);
    printf("%d%d%d",b,e,g);

    
    return 0;
}