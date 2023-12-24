#include<iostream>

using namespace std;
class base1{
   protected:
    int a;
public:
    base1(){
        a=0;
    }
    base1(int a){
        this->a=a;
    }
    base1(base1 &k){
            k.a=a;
    }
    void displaybase1(){
        cout<<"a"<<a;
    }
};
class Base2{
    protected:
    int b;
    public:
    Base2(){
        b=0;
    }
    Base2(int b){
        this->b=b;

    }
    Base2(Base2 k){
        b=k.b;
    }
    void displayBase2(){
    cout<<"b="<<b;
}};
class Derived:public base1,Base2{
    int c;
    public:

    

}
int main(){
    
    return 0;
}