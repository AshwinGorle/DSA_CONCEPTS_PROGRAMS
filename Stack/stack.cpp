#include<iostream>
using namespace std;

class stack{
    int top;
    int size;
    int *ptr;

    public:

    stack(){
        cout<<"Enter the expected max size of stack "<<endl;
        cin>>this->size;
        this->ptr = new int[this->size];
        this->top =-1;
    }
    stack(int length){
        cout<<"Enter the expected max size of stack "<<endl;
        cin>>this->size;
        this->ptr = new int[length];
        this->top =-1;
    }

    int isFull(){
        if(this->top == this->size-1)
        return 1;
        return 0;
        }
    int isEmpty(){
        if(this->top == -1)
        return 1;
        return 0;
        }
    int peek(){
        if(!(this->isEmpty()))
        return this->ptr[this->top];
    }

    void push(int val){
        if(!(this->isFull())){
            this->top++;
            this->ptr[this->top] = val;
            cout<<val<<" inserted at "<<this->top<<endl;

        }else{
            cout<<"can not insert stack is full"<<endl;
        }
    }

    void pop(){
        if(!(this->isEmpty())){
              cout<<this->ptr[this->top]<<" removed "<<endl;
              this->top--;
        }else{
            cout<<"can not pop stack is empty "<<endl;
        }
    }
    void printStack(){
        cout<<endl;
        for(int i = this->top; i>=0; i--){
            cout<<" | "<<this->ptr[i]<<" |"<<endl;
        }
        cout<<endl;
    }
};




int main(){
    stack s1;
    int n=0;
    do{
        cout<<"1 : push "<<endl;
        cout<<"2 : pop "<<endl;
        cout<<"3 : peek "<<endl;
        cout<<"4 : Display Stack "<<endl;
        cout<<"0 : exit"<<endl;
        cin>>n;

        switch (n)
        {
        case 1:
            int a;
            cout<<"Enter value ";
            cin>>a;
            cout<<endl;
            s1.push(a);
            break;

        case 2:
           s1.pop();
           break;
        
        case 3:
           s1.peek();
           break;
        
        case 4:
           s1.printStack();
           break;
          
        case 0: 
           break;
        
        default:
            cout<<"invalid choise "<<endl;
            break;
            
        }
    }while(n!=0);
    return 0;
}