#include<stdio.h>

int max_numb(); 
int max_of_three();
void positive_negative();
int divisible();
void even_odd();
void leap_year();
int factorial(int);
int prime_number(int);
void fibonachi_series(int);
void table(int);
int pwer(int, int);
void swaping(int ,int);
void decimal_to_binary(int);
void amstrong(int );


 
int main(){

    int numb1,numb2,result;
    
    result=max_numb(50,30);
    printf("greatet number is=%d\n",result); 

    result=max_of_three(10,30,40);
    printf("greatet number is=%d\n",result); 

    positive_negative(0);

    divisible(55);

    even_odd(88);
    leap_year(2300);

    result=factorial(5);
    printf("%d\n",result);

    if(prime_number(7)){
        printf("not prime\n");
    }
    else{
        printf("prime number\n");
    }

    fibonachi_series(8);
    table(5);

    printf("%d",pwer(10,2));

    swaping(10,20);

    decimal_to_binary(18);
   
    

    amstrong(123412554);


    return 0;
}




int max_numb(int numb1,int numb2){

    if(numb1>numb2){
        return numb1;
    }
    else{
        return numb2;
    }



}


int max_of_three(int numb1,int numb2,int numb3){

    if(numb1>numb2 && numb1>numb3){
        return numb1;
    }
    else if (numb2>numb1 && numb2>numb3)
    {
        return numb2;
    }
    else{
        return numb3;
    }

    
}


void positive_negative(int numb){

   if (numb>0){
    printf("positive\n");
    }
    else if (numb<0)
    {
        printf("negative\n");
    }

    else {
        printf("zero\n");
    }
    
}


int divisible(int numb){

    if(numb%5==0 && numb%11==0){
        printf("divisible\n");
    }
    else{
        printf("not divisible\n");
    }
    
}


void even_odd(int numb){
    if(numb%2==0){
        printf("even\n");
    }
    else{
        printf("odd\n");
    }
}


void leap_year(int numb){

    if((numb%400 || numb%4) && numb%100!=0){
        printf("leap year\n");
    }
    else{
        printf("not leap year\n");
    }


}

int factorial(int n){

    int i,fact=1;
    for(i=1;i<=n;i++){
        fact=fact*i;
    }
    return fact;
}


int prime_number(int n){
    int i,flag=0;
    for(i=2;i<n;i++){
        if(n%i==0){
            flag=1;
            break;
        }
    }
    return flag;
}



void fibonachi_series(int n){

    int i,sum=1,k=0,res;

    for(i=0;i<=n;i++){
        if(i==0 || i==1){
            printf("%d\n",i);

        }
        else{
        res=sum+k;
        
        printf("%d\n",res);
        k=sum;
        sum=res;
        }
    }

}


void table(int n){
    int i, table;
    for(i=1;i<=10;i++){

        table=i*n;
        printf("%d\n",table);
    }
}


int pwer(int n,int y){
    int i,pow=1;
    for(i=1;i<=y;i++){
        pow=pow*n;
    }
    return pow;
}


void swaping(int a,int b){

    int temp;
    temp=a;
    a=b;
    b=temp;
    printf("a=%d,b=%d\n",a,b);
}

void decimal_to_binary(int n){

    int remainder,base,binary=0;
    base=1;
    while(n>0){
        remainder=n%2;
        n=n/2;
        binary=binary+remainder*base;
        base=base*10;
    }
    printf("binary=%d\n",binary);
    
}

void amstrong(int d){
    int numb=55;

    int i,count=0, num=numb,stor,sum=0 ,squ=1;

    while(numb>0){
        stor=numb%10;
        numb=numb/10;
        count=count+1;
        for(i=1;i<=count;i++){
            squ=squ*stor;
                }
                sum=sum+stor;
                printf("%d\n",sum);
    }
    

    printf("%d%d",sum);



}