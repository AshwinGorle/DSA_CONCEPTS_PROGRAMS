// here we will shift data in Array as we shift in right and left shift registers in digital system

#include<stdio.h>
#include<conio.h>

void leftShift(int arr[],int size, int times){
        for(int i=0; i<size; i++){
                if(i<size-times){         // so that at the end we can insert Zeros
                arr[i] = arr[i+times];
                }else{
                    arr[i] = 0;
                }
              }
        
}
void rightShift(int arr[],int size, int times){
         for(int i = size-1; i>=0; i--){
            if(i>=times){
              arr[i] = arr[i-times];
            }else{
              arr[i] = 0;
            }
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
int arr[6 ]={0,1,2,3,4,5,};
int size = 6;
print(arr,size);
leftShift(arr,size,1);
print(arr,size);



return 0;
}