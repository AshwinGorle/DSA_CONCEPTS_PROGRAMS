// here we hare reversed array n O(n/2) using two itratives i and j

#include<stdio.h>
#include<conio.h>
void reverse(int arr[], int size){
    int i = 0;
    int j = size-1;
    while(i<=j){
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++; j--;
    }
}
void print(int arr[], int size){
        for(int i =0; i<size; i++){
            printf(" %d ",arr[i]);
        }
        printf("/n");
}
int main()
{
int arr[11]={0,1,2,3,4,5,6,7,8,9,10};
int size = 11;
print(arr,size);
reverse(arr,size);
print(arr,size);
return 0;
}