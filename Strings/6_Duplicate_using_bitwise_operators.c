#include<stdio.h>

int main(){
char A[] = "finiding";
long int H=0;
long int x=0;
for(int i=0; i<8; i++){
    x=1;
    int temp = A[i];
    
    x = x<<(temp-97);
    if((x&H) > 0){
        printf(" %c duplicate found !",A[i]);
        break;
    }else{
        H = x|H;
    }
}
return 0;
}