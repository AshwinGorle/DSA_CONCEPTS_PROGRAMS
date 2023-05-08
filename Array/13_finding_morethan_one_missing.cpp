#include<iostream>
using namespace std;

void findMissing(int arr[], int n){
   
   int low = arr[0];
  
   int differance = low;
   int count =0;
   
   for(int i =0; i<n; i++ ){
        if(arr[i]-i != differance){
            while(differance < arr[i]-i){
            count++;
            cout<<count<<" missing element found which is "<<i+differance<<endl;
            differance++;
            }
        }
   }


}


int main(){

int arr[10] = {5,9,10,11,13,14,15,16,18,19 };
findMissing(arr,10);
    
                                   
}