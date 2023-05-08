#include<iostream>
using namespace std;

void findOneMissing(int arr[],int n){
    int  N = n+1; // because if one element is missing then in an array then one succsessive element will come into picture
    int s =  N*(N+1)/2;
    int sum = 0;
    for(int i = 0; i<n; i++){
        sum += arr[i];
    }
    if(s == sum){
        cout<<" no missing element is there"<<endl;
    }else{
        cout<<"misisng element is found which is "<<s-sum<<endl;
    }

}



int main(){
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    findOneMissing(arr, 10);
}