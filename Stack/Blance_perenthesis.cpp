#include<iostream>
using namespace std;
class node{
    
    public:
    struct node* next;
    char data;
};

class stack{
    struct node * top = NULL ;
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

    void push(char val){
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

    char sttop(){
        if(!isEmpty()){
           char c = this->top->data;
           return c;
        }else{
            return '0';
        }
    }
    int isMathching(string s){
   
    for(int i=0; i<s.length(); i++){
         if(s[i] == '(' || s[i] == '[' || s[i] == '{'){
              push(s[i]);
              
         }else if(s[i] == ')' || s[i] == ']' || s[i] == '}'){
            if(!isEmpty()){
                       if(s[i] == ')' && sttop() =='(' || s[i] == '}' && sttop() =='{' || s[i] == ']' && sttop() =='['  ){
                        pop();
                       }else{return 0;}
            }else{
                return 0;
            }
         }else{

         }
    }
    printStack();
    if(isEmpty()){
      return 1;
    }
    return 0;
}


};




int main()
{
    stack st;
    string s = "{[()]}}";
   int result = st.isMathching(s);
   cout<<result<<endl;

return 0;
}