//Created By Momin_Rifat
#include<stdio.h>
int main()
{
    int num[4];

    for(int i = 0; i < 4; i++)
    {
        scanf("%d",&num[i]);
    }

    int max = num[0];
    for(int i = 1; i < 4; i++)
    {
        if(max < num[i])
        {
            max = num[i];
        }
    }

    for(int i = 0; i < 4; i++)
    {
        for(int j =i + 1; j < 4; j++)
        {
            if(num[i] > num[j])
            {
                int temp;
                temp = num[i];
                num[i] = num[j];
                num[j] = temp;
            }
        }
    }

    printf("%d %d %d",max - num[0],max - num[1],max - num[2]);

    return 0;
}