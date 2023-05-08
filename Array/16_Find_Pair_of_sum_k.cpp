#include<iostream>
using namespace std;
// it has complexity of O(n^2) to make it linear we can also use hash table concept
void findPair(int arr[], int n, int k){
       for(int i=0; i<n; i++){
        for(int j = i; j<n; j++){
            if((arr[i] + arr[j]) == k){
                cout<<"pair of "<<arr[i]<<" and "<<arr[j]<<" is equal to "<<k<<endl;
            }
        }
       }
}

// using hash table method
void findPairByHash(int arr[], int n, int k, int max){
    
    int *H = (int *)malloc(sizeof(int)*max);
    for(int i=0; i<max; i++){
        H[i] = 0;
    }

    for(int j = 0; j<n; j++){
        int tofind = k-arr[j];

        if(H[tofind] > 0 && tofind>=0){
            cout<<" found "<<arr[j]<<" + "<<tofind<<" = "<<k<<endl;
        }else{
            H[arr[j]]++;
        } 
    }

}

int main()
{
int arr[11] = {5,9,3,10,7,14,4,16,6,11,1 };
//findPair(arr,11,10);
findPairByHash(arr,11,10,14);
return 0;
}