//Created By Momin_Rifat
#include<stdio.h>
int main() 
{
    int n;
    scanf("%d",&n);
    
    char s[n + 1];
    scanf("%s",s);
    
    int alphabet[26] = {0};
    
    for(int i = 0; s[i]; i++) 
    {
        char c = s[i];
        if(c >= 'a' && c <= 'z') 
        {
            alphabet[c - 'a'] = 1;
        } 
        else if(c >= 'A' && c <= 'Z') 
        {
            alphabet[c - 'A'] = 1;
        }
    }
    
    int isPangram = 1;
    for(int i = 0; i < 26; i++) 
    {
        if(alphabet[i] == 0) 
        {
            isPangram = 0;
            break;
        }
    }
    
    if(isPangram) 
    {
        printf("YES\n");
    } 
    else {
        printf("NO\n");
    }
    
    return 0;
}