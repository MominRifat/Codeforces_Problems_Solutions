#include<stdio.h>
#include<string.h>

int main() 
{
    char word1[101],word2[101];
    scanf("%s %s",word1,word2);

    char s[101];
    strcpy(s, word1);
    strrev(s);

    if(strcmp(word2, s) == 0) 
    {
        printf("YES\n");
    } 
    else 
    {
        printf("NO\n");
    }

    return 0;
}