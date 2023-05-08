#include<iostream>
using namespace std;
// here we are finding and counting duplicates in a shorted array

void findDuplicate(int arr[], int n){
    int lastDuplicate = 0;
    for(int i=0; i<n; i++){
        if(arr[i] == arr[i+1] && arr[i]!=lastDuplicate){
            cout<<"Duplicate element found! which is "<<arr[i]<<endl;
            lastDuplicate = arr[i];
        }
    }
}


void countDuplicate(int arr[], int  n){

    for(int i=0; i<n; i++){
        
        if(arr[i] == arr[i+1]){
        int j = i;

        while(arr[j] == arr[i]){
             j++;
        }
        int count = j-i;
        cout<<arr[i]<<" is present "<<count<< " Times"<<endl;
        i= j-1;
    }
    }
}
int main(){
    int arr[10] = {5,9,10,10,13,14,15,16,16,16 };
countDuplicate(arr,10);
}