#include<stdio.h>
#include<string.h>
int main()
{
    int len,i,j;
    char s[101],a[201];
    gets(s);
    len = strlen(s);
    for(i=0,j=0;i<len;i++)
    {
        if(s[i] != 'A' && s[i] != 'a' && s[i] != 'E' && s[i] != 'e' && s[i] != 'I' && s[i] != 'i' && s[i] != 'O' && s[i] != 'o' && s[i] != 'U' && s[i] != 'u' && s[i] != 'Y' && s[i] != 'y')
        {
            a[j] = '.';
            j++;
            if(s[i] >= 65 && s[i] <= 90)
            {
                a[j] = s[i] +32;
                j++;
            }
            else
            {
                a[j] = s[i];
                j++;
            }
        }
    }
    a[j] = '\0';
    puts(a);
    return 0;
}