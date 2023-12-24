#include<stdio.h>

int main(){

//     int i,j=1,k,no,numb,fact=1,rais,flag=0;
//     for(k=0;k<2;k){
//     printf("1.factorial\n");
//     printf("2.prime number\n");
//     printf("3.power\n");
//     printf("4.exit\n");
//     printf("enter number=");
//     scanf("%d",&no);
//     switch(no){
//     case 1:
//     {
//     printf("enter number to find factorial=");
//     scanf("%d",&numb);
//     for(i=1;i<=numb;i++){
//         fact=fact*i;
//     }
//     printf("%d\n",fact);

//     break;

//     }

//     case 2:{

//     printf("enter number=");
//     scanf("%d",&numb);

//     for(i=1;i<=numb;i++){
//         flag=0;
//         for(j=2;j<i;j++){
//             if(i%j==0){
//                 flag=1;
//                 break;
//             }
//         }
//     }

//     if(flag==1){
//         printf("not prime\n");
//     }
//     else{
//         printf("prime\n");
//     }
//     break;

//     }


//     case 3:{
//      printf("enter number to find power=");
//     scanf("%d",&no);
//     printf("enter power=");
//     scanf("%d",&rais);

//     for(i=1;i<=rais;i++){
//         j=no*j;
//     }
//     printf("%d\n",j);
//     }



// case 4:{
//     k=3;
        
//     }

// default:
// break;
//     }
    


//     }
    

// calculato



    // int sum,sub,multiply,divide,mod,num1,num2,choice, result,i;
    // for(i=0;i<=2;i){
    // printf("1.ADD\n");
    // printf("2.Substraction\n");
    // printf("3.Multiplication\n");
    // printf("4.Divide\n");
    // printf("5.Modulus\n");
    

    // printf("****Enter your choice****\n");
    // scanf("%d",&choice);


    // switch(choice){
    //     case 1:
    //     {
    //         printf("enter 1 number=");
    //         scanf("%d",&num1);
    //         printf("enter 2 number=");
    //         scanf("%d",&num2);

    //         result=num1+num2;
    //         printf("%d\n",result);
    //         break;
    //     }

    //     case 2:
    //     {
    //         printf("enter 1 number=");
    //         scanf("%d",&num1);
    //         printf("enter 2 number=");
    //         scanf("%d",&num2);

    //         result=num1-num2;
    //         printf("%d\n",result);
    //         break;
    //     }

    //     case 3:
    //     {
    //         printf("enter 1 number=");
    //         scanf("%d",&num1);
    //         printf("enter 2 number=");
    //         scanf("%d",&num2);

    //         result=num1*num2;
    //         printf("%d\n",result);
    //         break;
    //     }

    //     case 4:
    //     {
    //         printf("enter 1 number=");
    //         scanf("%d",&num1);
    //         printf("enter 2 number=");
    //         scanf("%d",&num2);

    //         result=num1/num2;
    //         printf("%d\n",result);
    //         break;
    //     }
    //     case 5:
    //     {
    //         printf("enter 1 number=");
    //         scanf("%d",&num1);
    //         printf("enter 2 number=");
    //         scanf("%d",&num2);

    //         result=num1%num2;
    //         printf("%d\n",result);
    //         break;
    //     }
    //     default:
    //     {
    //         printf("invalid number\n");
    //     }

    // }
    
    // // if(choice==7){
    // //     break;
    // // }
    // }




    // write a program to find maximum between two number


    // int numb1,numb2,numb3;

    // printf("enter two number=");
    // scanf("%d %d",&numb1,&numb2);


    // switch(numb1>numb2){
    //     case 1:
    //     printf("number 1 is greater");
    //     break;

    //     case2:
    //     printf("number 2 is greater");
    //     break;

    //     default:
    //     printf("invalid number");
    //     break;

    // }



    //  int numb1,numb2,numb3;

    // printf("enter two number=");
    // scanf("%d %d %d",&numb1,&numb2,&numb3);
    // if(numb1>numb2 && numb1>numb2){
    //     printf("number 1 is greater");
    // }

    // else{
    //     if(numb2>1 &&numb2>numb3){
    //         printf("number 2 is greater");
    //     }
    //     else{
    //         printf("number 3 is greater");
    //     }


    // }



// write a program to check if number is 0 positive or negative


    // int numb ;

    // printf("enter number");

    // scanf("%d",&numb);

    // if(numb>0){
    //     printf("number is positive");
    // }

    // else{
    //     if(numb<0){
    //         printf("number is negative");}

    //     else{
    //         if(numb==0){
    //             printf("number is 0");
    //         }
    //         else{
    //             printf("invalid number");
    //         }
    //     }
    //     }



// write weather number is divisible by 5 and 11


    // int numb;

    // printf("enter number");
    // scanf("%d",&numb);

    // if(numb%5==0 && numb%11==0){
    //     printf("number is divisible by 11 and 5");
    // }

    // else{
    //     printf("number is not divisible");
    // }



// check even or odd

//  int numb;

//     printf("enter number");
//     scanf("%d",&numb);

//     if(numb%2==0){
//         printf("number is even");
//     }

//     else{
//         printf("number is odd");
//     }
  


//     int i,j=1,k,no,numb,fact=1,rais,flag=0,numb1,numb2,numb3,year;
//     char cha;
//     int ch;

//     do{

//     printf("1.find  greater among 2 numbers\n");
//     printf("2.find greater number among 3 numbers\n");
//     printf("3.check positive negative and zero\n");
//     printf("4.check number is divisble by 11 and 5\n");
//     printf("5.check number is even or odd\n");
//     printf("6.check year is leap year or not\n");

//     printf("7.check weather alphabet or not\n");
//     printf("8.check alphabet consonant vovel special character or number\n");
//     printf("9.convert Uppercase to lower case or lower case to upper case\n");

//     printf("enter number=");
//     scanf("%d",&no);

//     switch(no){
//     case 1:
//     {

//     printf("enter two number=");
//     scanf("%d %d",&numb1,&numb2);

//     if(numb1>numb2){
//         printf("number i is greater\n");

//     }
//     else{
//         printf("number 2 is greater\n");
//     }
//     break;
//     }
    

//     case 2:{

   
//     printf("enter three number=");
//     scanf("%d %d %d",&numb1,&numb2,&numb3);
//     if(numb1>numb2 && numb1>numb2){
//         printf("number 1 is greater\n");
//     }

//     else{
//         if(numb2>1 &&numb2>numb3){
//             printf("number 2 is greater\n");
//         }
//         else{
//             printf("number 3 is greater\n");
//         }

//     }
//     break;
// }
//     case 3:{


//     printf("enter number");

//     scanf("%d",&numb);

//     if(numb>0){
//         printf("number is positive\n");
//     }

//     else{
//         if(numb<0){
//             printf("number is negative\n");}

//         else{
//             if(numb==0){
//                 printf("number is 0\n");
//             }
//             else{
//                 printf("invalid number\n");
//             }
//         }
//         }
//         break;
//     }


//     case 4:
   

//     printf("enter number");
//     scanf("%d",&numb);

//     if(numb%5==0 && numb%11==0){
//         printf("number is divisible by 11 and 5\n");
//     }

//     else{
//         printf("number is not divisible\n");
//     }
//     break;
//     case 5:



//     printf("enter number");
//     scanf("%d",&numb);

//     if(numb%2==0){
//         printf("number is even\n");
//     }

//     else{
//         printf("number is odd\n");
//     }
//     break;

//     case 6:{
    

//     printf("enter year=");
//     scanf("%d",&year);
//     if(year%400==0){
//     printf("leap year");
// }
// else{
//     if(year%4==0){
//         printf("leap year");
//     }
//     else{
//         printf("not leap year");
//     }
// }
//     break;
//     }

//     case 7:
//     {

    

//     printf("enter character");
//     scanf("%d",&numb1);

//     if(cha>=95 &&cha<=122 || cha>=65 && cha<=90){
//         printf("character\n");
//     }
//     else{
//         printf("not character\n");
//     }
//     break;
//     }

//     case 8:
//     {

    

//     printf("enter character=");
//     fflush(stdout);
//     scanf("%c",&cha); 

//     if(cha>=95 && cha<=122 || cha>=65 && cha<=90){
//         printf("alphabet\n");
//         if(cha=='a' || cha=='e' || cha=='i' || cha=='o' || cha=='u' || cha=='A' || cha=='E' || cha=='I' || cha=='O' || cha=='U'){
//             printf("vovel\n");
//         }
//         else{
//             printf("colsonent");
//         }

//     }

//     break;
//     }

//     case 9:
//     {

     

//     printf("enter character=");
//     scanf("%c",&cha);

//     if(cha>=95 && cha<=122 ){
//         printf("small character\n");
//         printf("%c",cha-32);
//     }
//     else{
//          printf("capital character\n");
//         printf("%c",cha+32);
//     }
        
//     }

//     default:
    
//     break;
//     }
//     printf("press 1 to continue press n to exit");
   
//     scanf("%d",&ch);
//     }
     
//     while(ch==1);


// leap year

// int year;

// printf("enter year=");
// scanf("%d",&year);
// if(year%400==0 || year%4==0 && year%100!=0 ){
//     printf("leap year");
// }
// else{
    
//         printf("not leap year");
    
// }



// // check weather alphabet or not

//     char ch;
//     int a;

//     printf("enter character");

//     scanf("%c",&ch);

//     if(ch>=95 &&ch<=122 || ch>=65 && ch<=90){
//         printf("character");
//     }
//     else{
//         printf("not character");
//     }
    
    

//     // check alphabet consonant vovel special character or number

//     char ch;

//     printf("enter character=");
//     scanf("%c",&ch); 

//     if(ch>=95 && ch<=122 || ch>=65 && ch<=90){
//         printf("alphabet\n");
        
//     }
//     else{
//             if(ch>='0' && ch<='9'){
//                 printf("digit");
//             }
//             else{
//         printf("special character");
//     }
//         }

//     // conver to lower case

//      char ch;
     

//     printf("enter character=");
//     scanf("%c",&ch);

//     if(ch>=95 && ch<=122 ){
//         printf("small character\n");
//         printf("%c",ch-32);
//     }
//     else{
//          printf("capital character\n");
//         printf("%c",ch+32);
//     }
        




// // week days

//  int numb;

//  printf("enter week days=");

//  sacnf("%d",&numb);

//     switch(numb){

//         case 1:
//         printf("monday");
//         break;

//         case 2:
//         printf("Tuesday");
//         break;

//         case 3:
//         printf("wednesday");
//         break;

//         case 4:
//         printf("Thursday");
//         break;

//         case 5:
//         printf("Friday");
//         break;

//         case 6:
//         printf("saturday");
//         break;

        
//         case 7:
//         printf("sunday");
//         break;

//     }


// enter month number and print number of days


    // int numb;

    // printf("enter month=");

    // scanf("%d",&numb);

    // if(numb==1 || numb==3 || numb==5 || numb==7 ||  numb==8 || numb==10 || numb==12){
    //     printf("%d",31);
    // }
    // else if (numb==2)
    // {
    //     printf("%d",28);
    // }
    // else if(numb==2 || numb==4 || numb==6 || numb==9 ||  numb==1){
    //     printf("%d",30);
    // }
    // else{
    //     printf("invald input");
    // }
    

// count total number of notes required in given ammount

    // int ammount, value;

    // printf("enter amount=");
    // scanf("%d",&ammount);

    // if(ammount>=500){
    //     value=ammount/500;
    //     ammount=ammount-(value*500);
    //     printf("500=%d\n",value);
    // }

    // if(ammount>=200){
    //     value=ammount/200;
    //     ammount=ammount-(value*200);
    //     printf("200=%d\n",value);
    // }

    // if(ammount>=100){
    //     value=ammount/100;
    //     ammount=ammount-(value*100);
    //     printf("100=%d\n",value);
    // }
    // if(ammount>=50){
    //     value=ammount/50;
    //     ammount=ammount-(value*50);
    //     printf("50=%d\n",value);
    // }
    // if(ammount>=20){
    //     value=ammount/20;
    //     ammount=ammount-(value*20);
    //     printf("20=%d\n",value);
    // }
    // if(ammount>=10){
    //     value=ammount/10;
    //     ammount=ammount-(value*10);
    //     printf("10=%d\n",value);
    // }
    // if(ammount>=5){
    //     value=ammount/5;
    //     ammount=ammount-(value*5);
    //     printf("5=%d\n",value);
    // }
    // if(ammount>=2){
    //     value=ammount/2;
    //     ammount=ammount-(value*2);
    //     printf("2=%d\n",value);
    // }
    // if(ammount>=1){
    //     value=ammount/1;
    //     // ammount=ammount-(value*500);
    //     printf("1=%d\n",value);
    // }
   
    

    // input angeles of traiangle and and check weather trangle is valid or not


    // int ang1,ang2,ang3,total;

    // printf("enter 3 angles");
    // scanf("%d%d%d",&ang1,&ang1,&ang1);
    // total=ang1+ang2+ang3;
    // if(total==180){
    //     printf("it is a triangle");
    // }

    // else{
    //     printf("it is not a triangle");
    // }

    // input sides of traiangle and and check weather trangle is valid or not



    // int ang1,ang2,ang3,total;

    // printf("enter 3 sides");
    // scanf("%d%d%d",&ang1,&ang1,&ang1);
    
    // if(ang1+ang2>ang3 && ang2+ang3>ang1 && ang1+ang3>ang2){
    //     printf("it is a triangle");
    // }

    // else{
    //     printf("it is not a triangle");
    // }




    // check if triangle is isoselous or equilatoral or scalel triangle


    // int side1,side2,side3;
    //   printf("enter 3 sides");
    // scanf("%d%d%d",&side1,&side2,&side3);

    // if(side1==side2 && side1==side3 && side2==side3){
    //     printf("equilatoreal triangle");
    // }
    // else if (side1==side2 || side1==side3 ||side2==side3 )
    // {
    //     printf("isosewlous triangle");
    // }
    // else if (side1!=side2 && side1!=side3 && side2!=side3 ){
    //     printf("scalane tringle");
    // }
    
    

    // solve the quadratic equation

    // int a,b,c,x;

    // printf("enter value of a b and x");
    // scanf("%d%d%d",&a,&b,&x);

    // c=-(a*x*x)-(b*x*x);
    // printf("%d",c);


// find profit or loss

    // int buyingprice, sellingprice,total;

    // printf("enter buying price and selling price");
    // scanf("%d%d",&buyingprice,&sellingprice);

    // total=sellingprice-buyingprice;

    // if(sellingprice>buyingprice){
    //     printf("profit of %d",total);
    // }
    // else if(sellingprice<buyingprice){
    //     printf("loss of %d",total);
    // }
    // else{
    //     printf("no profit no loss");
    // }



// int phy,chem,bio,maths,comp, avg;
// float perc;

//     printf("enter marks of phy,chem,bio,maths,comp");
//     scanf("%d %d %d %d %d",&phy,&chem,&bio,&maths,&comp);
//     avg=phy+chem+bio+maths+comp;

//     perc=(avg*100)/500.0;

//     if(perc>=90){
//         printf("A");
//     }

//     else if (perc>=80)
//     {
//         printf("B");
//     }
    
//     else if (perc>=70)
//     {
//         printf("C");
//     }
//     else if (perc>=60)
//     {
//         printf("D");
//     }
//     else if (perc>=40)
//     {
//         printf("E");
//     }
//     else{
//         printf("F");
//     }












return 0;
}