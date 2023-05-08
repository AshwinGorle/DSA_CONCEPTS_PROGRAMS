#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
// here we are gooing to merge two sorted arrays

int* merge(int arr1[], int arr2[])
{
    int n = sizeof(*arr2);
    printf("%d ",n);
    int m = sizeof(*arr1);
    printf("%d ",m);
    int i, j, k = 0;
    int *arr = (int *)malloc(sizeof(int) * (m + n));
    
        while (i < m && j < n)
        {
            if (arr1[i] < arr2[j])
            {
                arr[k] = arr1[i];
                i++;
                k++;
            }
            else if (arr2[j] < arr1[i])
            {
                arr[k] = arr2[j];
                j++;
                k++;
            }
        }
        while (i < m)
        {
            arr[k] = arr1[i];
            i++;
            k++;
        }
        while (j < n)
        {
            arr[k] = arr2[j];
            j++;
            k++;
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
    // int array1[4] = {5,88,91,94};
    // int array2[7] = {40,90,92,948,99,22,66};
    // int * result = merge(array1,array2);
    // int size = sizeof(result)/sizeof(int);
   
    // print(result, size);

    int *arr = (int*)malloc(sizeof(int)*5);
    for(int i=0; i<5; i++){
        arr[i] = i*10;
    }
    int * array = arr;
    printf("\n%d\n",array.length());
    print(array,5);
    return 0;
}