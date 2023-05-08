#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
//creating array ADT with following operations on a array
//Creation, INSERTION, DELETION at index and by value, Binary and Linear SEACHIG 

struct arrayADT{
    int *arr;
    int capacity;
    int lenght;
};

void create(struct arrayADT array, int len, int size){
    array.arr= (int *)malloc(sizeof(int)*size);
    array.capacity = size;
    array.lenght = len;
    for(int i = 0; i<len; i++){
        printf("enter the element at index %d ",i);
        scanf("%d",&array.arr[i]);
    }
    printf("array has created of capacity %d and filled with %d elements",array.capacity,array.lenght);
}

void searchByValue(struct arrayADT array, int key){
    int i = 0;
    while(array.arr[i] != key){
        i++;
    }
    if(array.arr[i]==key){
        printf("element found at %d index",i);
    }else{

        printf("not found");
    }
}

int binarySearch(struct arrayADT array, int key){
    int low = 0;
    int high = array.lenght-1;
    while(low<=high){
    int mid = (low + high)/2;
    if(array.arr[mid]==key){
        printf("Element found at index %d ",mid);
        return mid;
    }else if(array.arr[mid] < key){
        low = mid+1;
    }else{
        high = mid-1; 
    }
}
printf("not found");
return 0;
}

int main(){
    struct  arrayADT a1;
    create(a1,10,10);
    int flag = binarySearch(a1,59);
    printf("%d",flag);
    return 0;
}