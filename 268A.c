//Created By Momin_Rifat
#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    int x[n],y[n];
    int count = 0;

    for(i = 0; i < n; i++)
    {
        scanf("%d %d",&x[i],&y[i]);
    }

    for(int j = 0; j < n; j++)
    {
        for(int z = 0; z < n; z++)
        {
            if(x[j] == y[z])
            {
                count ++;
            }
        }
    }

    printf("%d",count);

    return 0;
}