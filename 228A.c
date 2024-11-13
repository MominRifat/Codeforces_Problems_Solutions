//Created By Momin_Rifat
#include<stdio.h>
#include<string.h>
int main()
{
    char number1[101];
    char number2[101];
    
    scanf("%s",number1);
    scanf("%s",number2);

    int len = strlen(number1);

    for(int i = 0; i < len; i++)
    {
        if(number1[i] == number2[i])
        {
            printf("0");
        }
        if((number1[i] == '1' && number2[i] == '0') || (number1[i] == '0' && number2[i] == '1'))
        {
            printf("1");
        }
    }
    return 0;
}