//Created By Momin_Rifat
#include <stdio.h>
void sum_of_round_numbers(int n) 
{
    int multiplier = 1;
    int round_count = 0;
    int store[6];
    int index = 0;

    while (n > 0) 
    {
        int digit = n % 10;
        if (digit > 0) 
        {
            store[index++] = digit * multiplier;
            round_count++;
        }

        n /= 10;
        multiplier *= 10;
    }

    printf("%d\n",round_count);
    for(int i = 0; i < index; i++)
    {
        printf("%d ", store[i]);
    }
    printf("\n");
}

int main() 
{
    int t;
    scanf("%d", &t);

    for(int i = 0; i < t; i++) 
    {
        int n;
        scanf("%d", &n);
        sum_of_round_numbers(n);
    }

    return 0;
}