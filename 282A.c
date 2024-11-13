#include<stdio.h>
#include<string.h>
int main()
{
    char s[5];
    int i,n;
    int x=0;

    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        scanf("%s",s);
        if(s[i]=='+'||s[1]=='+')
        {
            x++;
        }
        else if(s[i]=='-'||s[1]=='-')
        {
            x--;
        }
    }

    printf("%d",x);
    return 0;
}