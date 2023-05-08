#include<iostream>
using namespace std;
// errors are there not fixed yet!
void findDuplicate(string a){
 char temp[5];
 for(int i = 0; a[i] != '\0'; i++){
    for(int j = i+1; a[j] != '\0'; j++){
        if(a[i] == a[j]){
            if(!(find(a[i], temp)))
            cout<<a[i]<<" is present more than one time"<<endl;

        }
    }
 }

}
bool find(char a, char temp[]){
    for(int i=0; i<5; i++){
        if(temp[i] == a){
            return true;
        }
    }
    return false;
}

int main()
{
string a = "hellow luys";
findDuplicate(a);

return 0;
}