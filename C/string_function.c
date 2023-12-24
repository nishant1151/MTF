#include<stdio.h>
#include<string.h>
int len_of_array(char *);
void reverse_String(char *);
void lower_to_upper(char *);
void upper_to_lower(char *);
void string_concat(char *,char *);
int main(){
    char str[20];
    char str1[20];
    int res;
    printf("enter string=");
    gets(str);
    printf("enter string=");
    gets(str1);

    // res=len_of_array(str);
    // printf("length of string is=%d",res);
    // reverse_String(str);
    // lower_to_upper(str);
    // upper_to_lower(str);
    string_concat(str,str1);
    puts(str);
    // puts(str);
    
    return 0;
}


int len_of_array(char * str){
    int i=0;
    while(str[i]!='\0'){
        i++;
    }
    return i;
}
    
void reverse_String(char * ptr){
    int i,len;
    char temp;
    len=len_of_array(ptr);
    for(i=0;i<=len/2;i++){
        temp=ptr[i];
        ptr[i]=ptr[len-1-i];
        ptr[len-1-i]=temp;

    }
}

void lower_to_upper(char *str){
    int len,i;
  
       len=len_of_array(str);
  
    for(i=0;i<len;i++){
        if(str[i]>='a' && str[i]<'z'){
            str[i]=str[i]-32;
        }
        // printf("%c",str[i]);
    }
}


void upper_to_lower(char * ptr){
    int len ,i;
    len=len_of_array(ptr);
    for(i=0;i<len;i++){
        if(ptr[i]>='A' && ptr[i]<='Z'){
            ptr[i]=ptr[i]+32;
        }
       
    }
}

void string_concat(char *ptr1,char *ptr2){
    int len1,len2,i,len3;

    len1=len_of_array(ptr1);
    len2=len_of_array(ptr2);
    // len1=len1+1;

    for(i=0;i<len2;i++){
     
       
        printf("%c\n",ptr2[i]);
 
        ptr1[i+len1]=ptr2[i];
        }
    } 





    