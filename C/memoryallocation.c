#include<stdio.h>
#include<stdlib.h>
int main(){
    int *ptr=(int*)malloc(4);
    scanf("%d",ptr);
    printf("%d",*ptr);
}