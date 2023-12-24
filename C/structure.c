#include<stdio.h>

struct emp
{
    int id;
    float sal;
    char name[25];
};



int main(){

    

        struct emp w;
        w.id=125;
        w.sal=1235;
        strcpy(w.name,'ABC');

        printf("%f",w.sal);
    puts(w.name);
    
    return 0;
}