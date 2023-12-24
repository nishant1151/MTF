#include<stdio.h>

int main(){

    //  area and cir circumference of circle

    // float radius,area, cir;

    // printf("enter the radius of circle");

    // scanf("%f",&radius);

    // area =radius*radius*3.14;

    // cir=2*radius*3.14;

    // printf("area of circel is %f and circumference of circle is %f",area,cir);




    // accept the number and check meven and odd

    // int numb;

    // printf("enter the number=");
    // scanf("%d",&numb);

    // (numb%2==0)?printf("number is even") : printf("number is odd");




    // calculate pecentage and print pass or fail

    // float sub_1,sub_2,sub_3,sub_4,sub_5,per,total;
    // printf("enter marks=");
    // scanf("%f %f %f %f %f",&sub_1,&sub_2,&sub_3,&sub_4,&sub_5);

    // total=sub_1+sub_2+sub_3+sub_4+sub_5;

    // per=(total*100)/500;
    // (per>60) ? printf("pass"):printf("fail");


    // print word on console and print total number of words 

    // char worr,cap,sma;
    // int a;
    
    // scanf("%c",&worr);
    // a=worr;

    // (a>97)?cap=worr-32:cap=worr+32;



    // printf("%c",cap);


    // accept 3 angles from user and check triangle is valud or not





    // int angle_1,angle_2,angle_3,total;

    // printf("enter 3 angles=");

    // scanf("%d %d %d",&angle_1,&angle_2,&angle_3);

    // total=angle_1+angle_2+angle_3;

    // (total==180)?printf("valid triangle"):printf("invalid triangle");44




    // while purchasing certain items discount of 10% is offered 


    float quantity,price, total,final_discount,per;

    printf("enter quantity of products");

    scanf("%f",&quantity);

    printf("enter price of products");

    scanf("%f",&price);

    total=quantity*price;

    per=(total*10)/100;

    final_discount=total-per;

    (quantity>=1000)?printf("%f",final_discount):printf("%f",total);





    // int a;
    // a=printf("hello");
    // printf("count=%d",a);

    return 0;

}