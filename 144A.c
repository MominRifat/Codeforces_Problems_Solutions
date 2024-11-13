//Created By Momin_Rifat
#include<stdio.h>
int main() 
{
    int n;

    scanf("%d",&n);
    int number[n];

    int max_number = 0;
    int min_number = 101;
    int max_index  = 0;
    int min_index = 0;

    for(int i = 0; i < n; i++) 
    {
        scanf("%d",&number[i]);

        if(number[i] > max_number) 
        {
            max_number = number[i];
            max_index = i;
        }

        if(number[i] <= min_number) 
        {
            min_number = number[i];
            min_index = i;
        }
    }

    int seconds;

    if (max_index > min_index)
    {
        seconds = max_index + (n - 1) - min_index - 1;
    }

    if(max_index < min_index)
    {
        seconds = max_index + (n - 1) - min_index;
    }

    printf("%d\n",seconds);

    return 0;
}