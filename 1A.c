#include<stdio.h>
int main()
{   
    long long int n,m,a,len,wid;
    long long int flagstone;

    scanf("%lld %lld %lld",&n,&m,&a);
    len = n/a;
    wid = m/a;
    if(n%a!=0)
    {
        len++;
    }
    if(m%a!=0)
    {
        wid++;
    }
    flagstone = len * wid;
    printf("%lld",flagstone);
    return 0;
}