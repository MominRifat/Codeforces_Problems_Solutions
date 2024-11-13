//Created By Momin_Rifat
#include<stdio.h>
int main()
{
    long long n,k;

    scanf("%lld %lld",&n,&k);

    long long result;

    if(k <= (n + 1) / 2)
    {
        result = 2 * k - 1;
    }
    else
    {
        k -= (n + 1) / 2;
        result = 2 * k;
    }

    printf("%lld\n",result);

    return 0;
}