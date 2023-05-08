#include <stdio.h>
#include <conio.h>

void toLowerCase(char s[])
{
    for (int i = 0; s[i] != '\0'; i++)
    {
        if (s[i] >= 65 && s[i] <= 90)
        {
            s[i] = s[i] + 32;
        }
    }
}

void toUpperCase(char s[])
{

    for (int i = 0; s[i] != '\0'; i++)
    {
        if (s[i] >= 97 && s[i] <= 122)
        {
            s[i] = s[i] - 32;
        }
    }
}

void countWord(char s[]){
    int count = 1;
    int vcount = 0;
    int ccount = 0;
    for(int i=0; s[i]!='\0'; i++){
        if(s[i] == ' '){
            count++;
        }
        if(s[i] == 'a'|| s[i] == 'e' || s[i] == 'i' || s[i] == 'o'|| s[i] == 'u' || s[i] == 'A'|| s[i] == 'E' || s[i] == 'I' || s[i] == 'O'|| s[i] == 'U'){
            vcount++;
        }else if(s[i]>=65 && s[i]<=90 || s[i]>=97 && s[i]<=122){
            
            ccount++;
           
        }
    }
        printf("\n umber of words is %d ",count);
        printf("\n number of vowels is %d ",vcount);
        printf("\n number of consonents is %d ",ccount);
}

    int main(){
    char name[] = "\ni am ashwin gorle";
    toUpperCase(name);
    printf("%s", name);
    countWord(name);

    return 0;
}