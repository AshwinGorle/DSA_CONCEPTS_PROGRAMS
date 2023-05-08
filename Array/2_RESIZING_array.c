// we can not  resize the array which is declaired in stack memory

//we can resize which is dynamicaly declaired or declaired in heap, yes not directly but by the alternative method as shown below

#include<stdio.h>
#include<conio.h>
int main()
{
int *p = (int *)malloc(sizeof(int)*5);
for(int i=0; i<5; i++){
    p[i]=5;
}
int * q= (int *)malloc(sizeof(int)*10);
for(int i=0; i<5; i++){
    q[i] = p[i];
}
free(p);
p=q;
q=NULL;


for(int i=0; i<10; i++){
    p[i]=5;
}
for(int i=0; i<5; i++){
    printf("%d ",p[i]);
}
printf("\n");
for(int i=0; i<10; i++){
    printf("%d ",p[i]);
}

return 0;
}