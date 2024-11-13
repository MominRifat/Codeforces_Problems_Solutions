//Created By Momin_Rifat
#include<stdio.h>
#include<math.h>

int is_prime(long long num) 
{
    if (num < 2) 
    {
        return 0;
    }
    if (num == 2) 
    {
        return 1;
    }
    if (num % 2 == 0) 
    {
        return 0;
    }
    for(long long i = 3; i * i <= num; i += 2) 
    {
        if(num % i == 0) 
        {
            return 0;
        }
    }
    return 1;
}

int is_t_prime(long long num) 
{
    long long sqrt_num = (long long)sqrt(num);
    return sqrt_num * sqrt_num == num && is_prime(sqrt_num);
}

int main() 
{
    int n;
    scanf("%d",&n);

    for(int i = 0; i < n; ++i) 
    {
        long long x;
        scanf("%lld",&x);

        if(is_t_prime(x)) 
        {
            printf("YES\n");
        } 
        else 
        {
            printf("NO\n");
        }
    }

    return 0;
}