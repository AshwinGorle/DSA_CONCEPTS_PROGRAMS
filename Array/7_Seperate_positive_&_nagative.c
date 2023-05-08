// here we will seperate positive and negative numbers in a array
// all the positive number should be on left side
// all the negative numbers must be on right side

// for this we will take two pointer i and j
// i will start from 0 and search for positive no
// i will start from size-1 and search for negative no
// if found swap them

#include<stdio.h>

    
    void seperate(int arr[], int size){
           int i = 0;
           int j = size-1;
           while(i<j){
           while(arr[i]<0){
            i++;
           }
           while(arr[j]>0){
            j--;
           }
           int temp = arr[i];
           arr[i]=arr[j];
           arr[j]=temp;
           }

    }

    void print(int arr[], int size){
        for(int i =0; i<size; i++){
            printf(" %d ",arr[i]);
        }
        printf("\n");
}

int main()
{



int arr[10]={0,-1,2,-3,4,-5,6,9,88,-10};
int size = 10;
print(arr,size);
seperate(arr,size);
print(arr,size);



return 0;
}