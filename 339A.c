#include<stdio.h>
#include<string.h>
int main() 
{
    char input[101];

    gets(input);

    int i = 0;
    int count_1 = 0;
    int count_2 = 0;
    int count_3 = 0;

    while(input[i] != '\0')
    {
        if(input[i] == '1')
        {
            count_1++;
        }
        if(input[i] == '2')
        {
            count_2++;
        }
        if(input[i] == '3')
        {
            count_3++;
        }
        i+=2;
    }

    for(int i = 0; i < count_1; i++) 
    {
        printf("1");
        if (i < count_1 - 1 || count_2 + count_3 > 0) 
        {
            printf("+");
        }
    }

    for(int i = 0; i < count_2; i++) 
    {
        printf("2");
        if (i < count_2 - 1 || count_3 > 0) 
        {
            printf("+");
        }
    }

    for(int i = 0; i < count_3; i++) 
    {
        printf("3");
        if (i < count_3 - 1) 
        {
            printf("+");
        }
    }
  
    return 0;
}