//Made By Momin_Rifat
#include<stdio.h>
int main()
{
    char number[20];
    int count = 0;
    int i = 0;
    scanf("%s",number);
    while(number[i] != '\0')
    {
        if(number[i] == '7' || number[i] == '4')
        {
            count ++;
        }
        i++;
    }
    number[i] = '\0';
    if(count == 7 || count == 4)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return 0;
}