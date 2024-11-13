//Created By Momin_Rifat
#include<stdio.h>
int main() 
{
    int n;
    scanf("%d",&n);
    int number[n];

    for (int i = 0; i < n; i++) 
    {
        scanf("%d",&number[i]);
    }

    int sereja_sum = 0;
    int dima_sum = 0;
    int j = 0;
    int k = n - 1;

    while (j <= k) {
        if(number[j] > number[k]) 
        {
            sereja_sum += number[j++];
        } 
        else 
        {
            sereja_sum += number[k--];
        }

        if(j <= k) 
        {
            if (number[j] > number[k]) 
            {
                dima_sum += number[j++];
            } 
            else 
            {
                dima_sum += number[k--];
            }
        }
    }

    printf("%d %d\n", sereja_sum, dima_sum);

    return 0;
}