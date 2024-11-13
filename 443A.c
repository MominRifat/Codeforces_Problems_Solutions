//Created By Momin_Rifat
#include<stdio.h>
#include<string.h>
int main()
{
    char string[1001];
    int count = 0;

    gets(string);

    int len = strlen(string);
    int distinct_chars[26] = {0};

    for(int i = 0; i < len; i++)
    {
        if(string[i] == '{' || string[i] == '}' || string[i] == ',' || string[i] == ' ')
        {
            continue;
        }
        else
        {
            distinct_chars[string[i] - 'a'] = 1;
        }
    }
    for(int i = 0; i < 26; i++) 
    {
        if(distinct_chars[i] == 1) 
        {
            count++;
        }
    }

    printf("%d",count);

    return 0;
}