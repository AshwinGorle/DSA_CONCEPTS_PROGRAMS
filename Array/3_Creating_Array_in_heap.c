#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
    //creation of  2D array partialy in heap and partialy in stack
    int *A[3]; // this is in stack
    A[2] = (int *)malloc(sizeof(int)*4); //this is in heap
    A[1] = (int *)malloc(sizeof(int)*4); //this is in heap
    A[0] = (int *)malloc(sizeof(int)*4); //this is in heap
    
    //creation of 2D array completely in heap using double pointer
    int **p;
    p = (int **)malloc(sizeof(int *)*3);
    P[0] = (int *)malloc(sizeof(int)*4); 
    P[1] = (int *)malloc(sizeof(int)*4); 
    P[2] = (int *)malloc(sizeof(int)*4); 

A[1][1] = 88;
printf("%d",A[1][1]);
p[1][1] = 88;
printf("%d",p[1][1]);
return 0;
}