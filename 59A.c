#include <stdio.h>
#include <string.h>

int main()
{
    char name[100];
    int i = 0;
    int cap = 0;
    int small = 0;

    gets(name);

    while (name[i] != '\0')
    {
        if (name[i] >= 'a' && name[i] <= 'z')
        {
            small++;
        }
        else
        {
            cap++;
        }
        i++;
    }

    if (cap <= small)
    {
        strlwr(name);
        printf("%s",name);
    }
    else
    {
        strupr(name);
        printf("%s",name);
    }
    return 0;
}