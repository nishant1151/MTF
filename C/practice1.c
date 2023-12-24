#include<stdio.h>
#include<string.h>
void stingcopy(char *,char*);
int lengthh(char *);
void string_concat(char*,char*);
int main(){
    char a[]="abcde";
    char b[]="myself";
   
    string_concat(a,b);
    // stringcopy(a);

    return 0;
}


void string_concat(char*a,char*b){
    
    int len1,len2,i;
    
    len1=lengthh(a);
    len2=lengthh(b);
    char c[len1+len2];

    for(i=0;i<len1;i++){
        c[i]=a[i];
         }
    for(i=0;i<len2;i++){
        c[len1+i]=b[i];
    }
    
    printf("%s",c);
}


int lengthh(char* a){
    int i=0,count=0;
    while(a[i]!='\0'){

    i++;
    
    }
return i;
}

void stringcopy(char* a){
    int len1=lengthh(a);
    // printf("%d",len1);
    char c[len1];
    for(int i=0;i<len1;i++){
        c[i]=a[i];
    }

    puts(c);
    
    
    }