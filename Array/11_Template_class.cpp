#include<iostream> 
using namespace std;

template <class T>

class Array{
    T *A;
    int size;
    int length;

    public:
    Array(){
       size = 10;
       A = new T[size];
       length = 0;
    }
    Array(int sz){
       size = sz;
       A = new T[size];
       length = 0;
    } 
    ~Array(){
        delete(A);
    }

    void display();
    void insert(T value, int index );
    T deletion(int index );
};

template <class T>
void Array<T> :: display(){
    for(int i =0; i<length; i++){
        printf(" %d ",A[i]);
    }
        printf("\n");
}

template <class T>
void Array<T> :: insert(T value, int index){
       if(length <= size && index >=0 ){}
       for(int i = length-1; i>+index; i-- ){
        A[i+1] = A[i];
       }
       A[index] = value;
       length++;

}
template<class T>
T Array<T> :: deletion(int index){
        T x = A[index];
    if(index < length && index >=0){
        for(int i = index; i <= length-1; i++ ){
                 
                A[i] = A[i+1] ;
        }
    }
    return x;
}
int main(){
    Array<int> arr;
    arr.insert(5,0);
    arr.insert(66,1);
    arr.insert(2,2);
    arr.display();
}