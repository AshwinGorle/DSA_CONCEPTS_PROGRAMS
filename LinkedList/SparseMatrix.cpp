#include<iostream>
using namespace std;

class Node{
    int col;
    int data;
    Node * next;
};

class SparseMatrix{
    Node * head = NULL;

};

void display(int arr[], int size){
    for(int i=0;i<size;i++){
        for(int j=0; j<size; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}

int main()
{   
    int arr[4][4];
    for(int i=0; i<4; i++){
        for(int j=0; j<4; j++){
            cout<<"enter element at "<<i<<"*"<<j<<endl;
            cin>>arr[i][j];
        }
    }

    display(arr,4);

return 0;
}