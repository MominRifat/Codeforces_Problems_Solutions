#include<stdio.h>
int main() 
{
    int n;
    scanf("%d",&n);
    
    char s[n];
    scanf("%s",s);

    int anton_count = 0;
    int danik_count = 0;

    for(int i = 0; i < n; i++) 
    {
        if(s[i] == 'A') 
        {
            anton_count++;
        } 
        else if(s[i] == 'D') 
        {
            danik_count++;
        }
    }

    if (anton_count > danik_count) 
    {
        printf("Anton\n");
    } 
    else if (danik_count > anton_count) 
    {
        printf("Danik\n");
    } 
    else 
    {
        printf("Friendship\n");
    }

    return 0;
}