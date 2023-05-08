#include <stdio.h>
#include <conio.h>
// string validation

void valUserName(char s[])
{
    int flag = 0;
    for (int i = 0; s[i] != '\0'; i++)
    {
        if (!(s[i] >= 65 && s[i] <= 90 || s[i] >= 97 && s[i] <= 122 ||
              s[i] >= 48 && s[i] <= 57))
        {
            flag = 1;
            if (flag == 1)
            {
                printf("username not valid");
               return;
            }
           
        }
    }
    printf("username valid");
}

int main()
{
    char name[] = "ashwin1518@556";
    valUserName(name);

    return 0;
}