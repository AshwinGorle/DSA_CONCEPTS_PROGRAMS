#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node *next;
};

class List{           
   
   Node *head = NULL;
   public:
    ///////////////////////////////////////////////////////////////////////////////
    void create(int arr[], int n);
    void display();
    bool isSorted();
    int count();
    void inserAtIndex(int val, int index);
    void sortedInsertion(int val);
    void deletByValue(int val);
    void deletByIndex(int index);
    void reverse();
    void concatinate(List h1, List h2);
    void merge(List h1, List h2);
    int sumTotal();
    ////////////////////////////////////////////////////////////////////////////////

};

void List :: create(int arr[], int n){
      Node *last = NULL;
    if(head == NULL){
        Node *newNode = (Node*)malloc(sizeof(Node));
        newNode->next = NULL;
        newNode->data = arr[0];
        head=newNode;
        last = head;
    }
    for(int i=1; i<n; i++){
    Node *newNode = (Node*)malloc(sizeof(Node)); 
    newNode->data = arr[i];
    newNode->next = NULL;
    last->next = newNode;
    last = newNode;
    }
        
}

void List :: display(){
    Node *p = head;
    while(p!=NULL){
        cout<<p->data<<" ";
        p=p->next;
    }
    cout<<endl;
}

bool List :: isSorted(){
    
    Node * p=head;
    Node * q = p->next;
    if(head == NULL){
        return true;
    }
    while(q!=NULL){
        if(p->data > q->data){
        return false;
        }else{
            p=p->next;
            q=q->next;
        }
    }
    return true;
}

int List :: count(){
    int counting =0;
    Node *p = head;
    if(head==NULL)
    return 0;
    while(p!=NULL){
        p = p->next;
        counting++;
    }
    return counting;
}

void List :: inserAtIndex(int val, int index){
    int n = this->count();
    if(index > n-1){
        cout<<" invalide index! "<<endl;
    }else{
    
    Node *p = head;
    Node * newNode = (Node *)malloc(sizeof(Node));
    newNode->next = NULL;
    newNode->data = val;
    if(index==0){
        newNode->next = head;
        head = newNode;
    }else{
    for(int i=0; i<index-1; i++){
        p=p->next;
    }
    newNode->next = p->next;
    p->next = newNode;
    }
    }
}

void List :: sortedInsertion(int val){
    if(isSorted()){
    Node *n = new Node;
    n->data = val;
    n->next = NULL;
    Node *p = head;
    Node *q = NULL;
    if(val < head->data){
             n->next = head;
             head = n;
    }else{
        while( val >= p->data && p->next!= NULL){
            q=p;
            p=p->next;
        }
        if(p->next == NULL){
            n->next = p->next;
            p->next = n;
        }else{
            
        n->next = q->next;
        q->next = n;
        }

    }
}else{
    cout<<"List is not sorted! "<<endl;
}
}

void List :: deletByValue(int val){
    Node * p = head;
    Node * q = NULL;
    if(head == NULL){
        cout<<" Can't Delete List is Empty ! "<<endl;
        return;
    }
    if(head->data == val){
        head = head->next;
        free(p);
    }else{
    while(p!=NULL){

        if(p->data == val){
            q->next = p->next;
            free(p);
            return;

        }else{
        q=p;
        p=p->next;
        }

    }
    }
    if(p == NULL){
        cout<<" node not found! "<<endl;
    }
}

void List :: deletByIndex(int index){
    Node * p =head;
    Node * q =NULL;
    int n = count();
    if(index > n-1){
        cout<<" invalide index "<<endl;
        return;
    }
    if(index==0){
        head = head->next;
        free(p);
    }else{
        for(int i=0; i<index; i++){
             q=p;
             p=p->next;
        }
        q->next = p->next;
        free(p);
    }
}

void List :: reverse(){
    Node * prev =NULL;
    Node * curr = head;
    Node * temp;
    while(curr != NULL){
        temp = curr->next;
        curr->next = prev;
        prev = curr;
        curr = temp;
        
    }
    head = prev;
}

void List :: concatinate(List l1, List l2){
    head = l1.head;
    Node *p = l1.head;
    while(p->next != NULL){
        p=p->next;
    }
    p->next = l2.head;
}

void List :: merge(List l1, List l2){
    Node * last;
    Node * p = l1.head;
    Node * q = l2.head;
    if(l1.head->data < l2.head->data){
        head = l1.head;
        last = l1.head;
        p = l1.head->next;
    }else{
        head = l2.head;
        last = l2.head;
        q = l2.head->next;
    }
    while(p!=NULL && q!=NULL){
        if(q->data < p->data){
            last->next = q;
            last = q;
            q=q->next;
        }else{
            last->next = p;
            last = p;
            p=p->next;
        }
    }
    if(p!=NULL){
        last->next = p;
    }
    if(q!=NULL){
        last->next = q;
    }
}

int List :: sumTotal(){
    Node *p = head;
    int sum=0;
    while(p!=NULL){
        sum+=p->data;
        p=p->next;
    }
    return sum;
}



int main()
{
int n;
do{
cout<<"1. Create a List "<<endl;
cout<<"2. Insert inSorted List "<<endl;
cout<<"3. Insert at index "<<endl;
cout<<"4. Delete by Index "<<endl;
cout<<"5. Delete by value "<<endl;
cout<<"6. Concatinate List "<<endl;
cout<<"7. Merge List "<<endl;
cout<<"8. Reverse List "<<endl;
cout<<"9. sumTotal of List "<<endl;
cout<<"10. Display List"<<endl;
cout<<"0. exit "<<endl;
cin>>n;
switch (n)
{
case 1:
    int k;
    cout<<"1. Number of Nodes in List ? "<<endl;
    cout<<"2. want to auto create List ? "<<endl;
    cin>>k;
    break;

default:
    cout<<"invalid option "<<endl;
    break;
}
}while(n!=0);



return 0;
}