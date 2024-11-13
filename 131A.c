//Created By Momin_Rifat
#include <stdio.h>
#include <string.h>
int main() 
{
    char word[101];

    scanf("%s", word);

    int i = 1;
    int isAllUppercase = 1;

    while(word[i] != '\0') 
    {
        if(word[i] >= 'a' && word[i] <= 'z') 
        {
            isAllUppercase = 0;
            break;
        }
        i++;
    }

    if(word[0] >= 'a' && word[0] <= 'z' && isAllUppercase) 
    {
        word[0] = word[0] - 32;
        for(i = 1; word[i] != '\0'; i++) 
        {
            word[i] = word[i] + 32;
        }
    }
    else if(word[0] >= 'A' && word[0] <= 'Z' && isAllUppercase) 
    {
        word[0] = word[0] + 32;
        for(i = 1; word[i] != '\0'; i++) 
        {
            word[i] = word[i] + 32;
        }
    }

    printf("%s",word);

    return 0;
}