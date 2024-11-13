//Created By Momin_Rifat
#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);

    for(int i = 0; i < t; i++)
    {
        int n;
        scanf("%d",&n);
        int number[n];

        for(int i = 0; i < n; i++)
        {
            scanf("%d",&number[i]);
        }
        for(int j = 1; j < n; j++)
        {
            if(number[0] != number[j] && number[j] == number[j+1])
            {
                printf("1\n");
                break;
            }
            else if(number[0] != number[j])
            {
                printf("%d\n",j+1);
                break;
            }
        }
    }
    return 0;
}