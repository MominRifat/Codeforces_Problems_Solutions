#include<stdio.h>
#include<string.h>
int main() 
{
    char name[101];
    scanf("%s",name);

    int characters[26] = {0};

    int len = strlen(name);

    for (int i = 0; i < len; i++) 
    {
        characters[name[i] - 'a'] = 1;
    }

    int count = 0;
    for (int i = 0; i < 26; i++) 
    {
        if (characters[i]) 
        {
            count++;
        }
    }

    if (count % 2 == 0) 
    {
        printf("CHAT WITH HER!\n");
    } 
    else 
    {
        printf("IGNORE HIM!\n");
    }

    return 0;
}