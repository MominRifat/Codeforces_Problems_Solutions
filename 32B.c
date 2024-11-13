//Created By Momin_Rifat
#include<stdio.h>
#include<string.h>
int main()
{
    char code[201];
    scanf("%s",code);

    int i = 0;
    while(code[i] != '\0')
    {
        if(code[i] == '.' && (code[i+1] == '.' || code[i+1] == '-' || code[i+1] == '\0'))
        {
            printf("0");
        }
        if(code[i] == '-' && code[i+1] == '.')
        {
            printf("1");
            i++;
        }
        if(code[i] == '-' && code[i+1] == '-')
        {
            printf("2");
            i++;
        }
        i++;
    }
    return 0;
}