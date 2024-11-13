//Created By Momin_Rifat
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    char num[1001];
    int i = 0;
    int count = 0;

    scanf("%s",num);

    while(num[i] != '\0')
    {
        if(num[i] == '7' || num[i] == '4')
        {
            count++;
        }
        i++;
    }
    num[i] = '\0';

    if(count == 7 || count == 4)
    {
        printf("YES");
    }
    else
    {
        if(atoi(num) % 4 == 0 || atoi(num) % 7 == 0 || atoi(num) % 44 == 0 || atoi(num) % 47 == 0 || atoi(num) % 74 == 0 || atoi(num) % 77 == 0 || atoi(num) % 444 == 0 || atoi(num) % 447 == 0 || atoi(num) % 474 == 0 || atoi(num) % 477 == 0)
        {
            printf("YES");
        }
        else
        {
            printf("NO");
        }
    }
    return 0;
}