//Created By Momin_Rifat
#include<stdio.h>
int main()
{
    int n;
    int num[101];
    int count_1 = 0;

    scanf("%d",&n);

    for(int i=0;i<n;i++)
    {
        scanf("%d",&num[i]);
    }

    for(int j=0;j<n;j++)
    {
        if(num[j] == 1)
        {
            count_1++;
            break;
        }
    }

    if(count_1 == 1)
    {
        printf("HARD");
    }
    else
    {
        printf("EASY");
    }

    return 0;
}