#include<stdio.h>
int main()
{
    int n;
    int number[101];
    scanf("%d",&n);

    for(int i = 0; i < n; i++)
    {
        scanf("%d",&number[i]);
    }

    for (int i = 0; i < n; i++) 
    {
        for (int j = i + 1; j < n; j++) 
        {
            if (number[j] < number[i]) 
            {
                int temp = number[i];
                number[i] = number[j];
                number[j] = temp;
            }
        }
    }

    for(int z = 0; z < n; z++)
    {
        printf("%d ",number[z]);
    }

    return 0;
}