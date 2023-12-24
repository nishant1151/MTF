class Stak{
    int arr[5];
    int top;
    
    int isfull(){
        if(top==5){
            return 1;
        }
        else{
            return 0;
        }
    }
    int isempty(){
        if(top==0){
            cout<<"hello";
            return 0;
            
        }
        else{
            cout<<"hii";
            return 1;

        }
    }

    public:

    Stack(){
        top=0;
    }

   

    void Push(int data){
        if(!isfull()){
        arr[top]=data;
        top++;
        cout<<"data added";
        }
        else{
            cout<<"stack is full";
        }
    }
    int pop(){
        if(isempty()){
            
             top--;
            cout<<arr[top]<<"is deleted";
           
        }

    }
};