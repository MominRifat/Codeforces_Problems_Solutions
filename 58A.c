//Created By Momin_Rifat
#include<stdio.h>
#include<string.h>
int main() 
{
    char s[101];
    scanf("%s",s);

    char expected_word[] = "hello";
    int i = 0,j = 0;

    while(s[i] != '\0' && expected_word[j] != '\0') 
    {
        if(s[i] == expected_word[j]) 
        {
            j++;
        }
        i++;
    }

    if (expected_word[j] == '\0') 
    {
        printf("YES\n");
    } 
    else 
    {
        printf("NO\n");
    }

    return 0;
}