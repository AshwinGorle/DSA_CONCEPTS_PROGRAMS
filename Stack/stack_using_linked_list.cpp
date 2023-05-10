#include<iostream>
#include<stdlib.h>
using namespace std;

class node{
    
    public:
    struct node* next;
    int data;
};

class stack{
    struct node * top =NULL ;
    public:

    int isEmpty(){
        if(this->top == NULL)
        return 1;
        return 0;
        }
    
    int isFull(){
        struct node * n = new node;
        if(n==NULL){
            cout<<"Error : stack over flow"<<endl;
            free(n);
            return 1;
        }else{
            free(n);
            return 0;
        }
    }
    int peek(int pos){
        struct node * p = this->top;
        if(!isEmpty()){
            for(int i=0; i<pos-1 && p!=NULL; p=p->next){
                
            }
            cout<<" peeked "<<p->data<<endl;
            return p->data;
        }   return 0;
    }

    void push(int val){
            if(!(isFull())){
            struct node * newNode = (struct node *)malloc(sizeof(struct node));
            newNode->next=NULL;
            newNode->data=val;
            newNode->next = this->top;
            this->top = newNode;
            }
            
    }

    void pop(){
        if(!isEmpty()){
            struct node * p;
            p=this->top;
            this->top=this->top->next;
            cout<<"element "<<p->data<<" removed "<<endl;
            free(p);

        }
        //return 0;
    }
    void printStack(){
        struct node * p = this->top;
        while(p!=NULL){
            cout<<"| "<<p->data<<" |"<<endl;
            p=p->next;
        }
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
            int pos;
            cout<<"Enter position "<<endl;
            cin>>pos;
           s1.peek(pos);
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