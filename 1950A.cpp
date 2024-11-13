//Created By Momin_Rifat
#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);

    while(n--)
    {
        int a,b,c;
        scanf("%d %d %d",&a,&b,&c);

        if(a < b && b < c)
        {
            printf("STAIR\n");
        }
        else if(a < b && b > c)
        {
            printf("PEAK\n");
        }
        else
        {
            printf("NONE\n");
        }
    }

    return 0;
}