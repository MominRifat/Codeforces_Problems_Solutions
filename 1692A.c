//Created By Momin_Rifat
#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    int a,b,c,d;

    int count = 0;
    for(int i = 0; i < t ; i++)
    {
        scanf("%d %d %d %d",&a,&b,&c,&d);
        if(a < b)
        {
            count++;
        }
        if(a < c)
        {
            count++;
        }
        if(a < d)
        {
            count++;
        }
        printf("%d\n",count);
        count = 0;
    }
    return 0;
}