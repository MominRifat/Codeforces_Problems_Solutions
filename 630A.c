//Created By Momin_Rifat
#include<stdio.h>
int main() 
{
    long long n;
    scanf("%lld",&n);

    int result;

    if (n % 20 == 0) 
    {
        result = 25;
    } 
    else 
    {
        long long exponent = n % 20;
        long long base = 5;
        int modulo = 100;
        result = 1;

        while (exponent > 0) 
        {
            if (exponent % 2 == 1) 
            {
                result = (result * base) % modulo;
            }
            base = (base * base) % modulo;
            exponent /= 2;
        }
    }

    printf("%d\n", result);

    return 0;
}