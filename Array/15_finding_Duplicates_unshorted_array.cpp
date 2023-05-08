
// here we will find duplicates in an unsorted array 
// by using hashing method
#include<iostream>
using namespace std;
void countUnsortedDuplicate(int arr[], int n, int max){
    
    int * A = (int*)malloc(sizeof(int)*max);
    for(int i = 0; i<max; i++){
        A[i] = 0;
    }
    for(int j=0; j<n; j++){
        A[arr[j]] += 1;
    }

    for(int k = 0; k<max; k++){
        if(A[k]>1){
            cout<<k<<" is present "<<A[k]<<" times "<<endl;
        }
    }
    
}

int main()
{

int arr[11] = {5,9,16,10,13,14,15,16,16,10,20 };
countUnsortedDuplicate(arr,11,20);

return 0;
}