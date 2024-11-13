#include<stdio.h>
int main() 
{
    int k, n, w;
    scanf("%d %d %d",&k,&n,&w);

    int totalCost = k * w * (w + 1) / 2;

    int borrowAmount = 0;

    if (totalCost > n) 
    {
        borrowAmount = totalCost - n;
    }

    printf("%d\n",borrowAmount);

    return 0;
}