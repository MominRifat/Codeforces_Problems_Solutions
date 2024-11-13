//Created By Momin_Rifat
#include<stdio.h>
#include<string.h>
int main()
{
    char word[201];

    scanf("%s",word);

    int i = 0;

    while(word[i] != '\0')
    {
        if(word[i] == 'W' && word[i+1] == 'U' && word[i+2] == 'B')
        {
            i += 2;
            printf(" ");
        }
        else
        {
            printf("%c",word[i]);
        }
        i++;
    }

    return 0;
}