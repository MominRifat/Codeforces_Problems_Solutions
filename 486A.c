#include <stdio.h>

int main() 
{
    long long int n;
    scanf("%lld", &n);

    long long int result;
    if (n % 2 == 0) 
    {
        result = n / 2;
    } 
    else 
    {
        result = -(n + 1) / 2;
    }

    printf("%lld\n", result);

    return 0;
}