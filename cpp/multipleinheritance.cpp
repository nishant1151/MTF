#include<iostream>

using namespace std;

class Test1{
    protected:
    int a;
    public:
    Test1(){
        a=0;

    }
    Test1(int a){
        this->a=a;

    }
    void displaytest1(){
        cout<<a<<endl;
    }



};
class Test2{
    protected:
    int a;
    public:
    Test2(){
        a=0;

    }
    Test2(int b){
        this->a=b;

    }
    void displaytest2(){
        
        cout<<a<<endl;
    }
    
    
};

class Test3:public Test1,public Test2{
    int c;
    public:
    Test3(){
        c=0;
    }
    Test3(int a,int b,int c):Test1(a),Test2(b)
    {
        this->c=c;
    }
    void displaytest3(){
        cout<<a;
        // cout<<a;
        cout<<c<<endl;

    }

} ;

int main(){
    Test3 obj(10,20,30);
    // obj.displaytest1();
    // obj.displaytest2();
    obj.displaytest3();
    cout<<sizeof(obj);
    return 0;
}