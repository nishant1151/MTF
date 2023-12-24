#include<iostream>

using namespace std;

class Base{
    public:
    void display(int a){
        cout<<a<<endl;
    }
    // void display(int a){
    //     cout<<a<<endl;
    // }
    
};

class Derived:public Base{
    public:
    void display(int a){

        cout<<"f"<<a<<endl;
    }
};
int main(){
    // Base obj;
    Derived obj1;
    obj1.display(10);
    // obj1.display                 ;
    return 0;
}