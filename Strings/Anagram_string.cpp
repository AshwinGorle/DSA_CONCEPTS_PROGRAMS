#include<iostream>
using namespace std;
// here we are checking whether two strings are anagram or not using " Hashing Method "
// Ex : decimal and medical are anagram to each other 

void anagram(string A, string B){
    int H[26] = {0};
    if(A.length() == B.length()){
    for(int i=0; A[i]!='\0'; i++){
        H[A[i]-97] += 1;
    }  
    for(int i=0; A[i]!='\0'; i++){
        H[B[i]-97] -= 1;
        if(H[B[i]-97] < 0){
            cout<<" string are not anagram";
            return;
        }
    } cout<<"strings are anagram";
        
}else{
      cout<<" string are not anagram";
}
    
}

// using bit manipulation method
void check_Anagram(string A, string B){
      int H1 = 0;
      int H2 = 0;
      int x; // takes 4 bytes means 32 bits which is suficient for adressing 26 alphabets
      for(int i=0; A[i]!='\n'; i++){
        x=1;
        x = x<<(A[i]-97);
        H1 = (H1|x);
        
      }
      for(int i=0; B[i]!='\n'; i++){
        x=1;
        x = x<<(B[i]-97);
        H2 = (H2|x);

      }
      if((H1^H2) != 0){
        cout<<"string are not anagram";
      }else{
         cout<<"string are anagram";
      }
}


int main()
{
   string str1 = "decimal";
   string str2 = "medical";
   
   check_Anagram(str1, str2);

return 0;
}