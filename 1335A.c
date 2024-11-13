//Created By Momin_Rifat
#include<stdio.h>
int main()
{
    int n;
    long long int a,count = 0;
    scanf("%d",&n);

    for(int i = 0; i < n; i++)
    {
        scanf("%lld",&a);

        count = (a - 1) / 2;
        printf("%lld\n",count);
    }
    return 0;
}