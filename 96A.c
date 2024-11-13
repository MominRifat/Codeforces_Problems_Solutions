#include<stdio.h>
#include<string.h>

int main() 
{
    char number[101];
    int count_0 = 0;
    int count_1 = 0;
    scanf("%s",number);

    int len = strlen(number);

    for(int i = 0; i < len; i++) 
    {
        if (number[i] == '0') 
        {
            count_0++;
            count_1 = 0;
        } 
        else 
        {
            count_1++;
            count_0 = 0;
        }

        if (count_0 >= 7 || count_1 >= 7) {
            printf("YES\n");
            return 0;
        }
    }

    printf("NO\n");
    return 0;
}