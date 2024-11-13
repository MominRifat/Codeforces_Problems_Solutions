//Created By Momin_Rifat
#include<stdio.h>
int main()
{
    int n;

    scanf("%d",&n);

    int number[n];

    for(int i = 0; i < n; i++)
    {
        scanf("%d",&number[i]);
    }

    int current_length = 1;
    int max_length = 1;

    for(int j = 1; j < n; j++)
    {
        if(number[j] >= number[j - 1])
        {
            current_length++;
        }
        else
        {
            current_length = 1;
        }

        if(current_length > max_length)
        {
            max_length = current_length;
        }
    }

    printf("%d",max_length);

    return 0;
}