#include<stdio.h>
#include<string.h>

typedef struct employee{
    int id;
    float salary;
    char name[20];
}emp;

emp scandata(emp );
void printdata(emp );

void scandatap(emp *);
void printdatap(emp *);
void validate_name(emp *);

    int main(){
    emp e;
    // e=scandata(e);
    // printdata(e);

    scandatap(&e);
    printdatap(&e);
    validate_name(&e);
 
    return 0;
}

emp scandata(emp e){
    
    char av[23];
    fflush;
    printf("enter id");
    scanf("%d",&e.id);
    printf("enter salary");
    scanf("%f",&e.salary);
    printf("enter name  ");
    scanf("%s",&e.name);
    return e;
}

void printdata(emp e){
    printf("id=%d salary=%f name=%s",e.id,e.salary,e.name);

}


void scandatap(emp *ptr){

    printf("enter id=");
    scanf("%d",&ptr->id);

    printf("enter salary=");
    scanf("%f",&ptr->salary);

    printf("enter name=");
    scanf("%s",&ptr->name);
}

void printdatap(emp *ptr){

    printf("id=%d salary=%f name=%s",ptr->id,ptr->salary,ptr->name);
    
}

void validate_name(emp *ptr){

    int i=0,flag=0;

    while(ptr->name[i]!='\0'){
        if(ptr->name[i]>='A' && ptr->name[i]<='Z' || ptr->name[i]>='a' && ptr->name[i]<='z'){
            flag=0;
        }
        else{
            flag=1;
            break;
        }
        i++;
    }

    if(flag==0){
        printf("name is valid");
    }
    else{
        printf("name is invalid");
    }
}






