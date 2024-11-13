#include<stdio.h>
int main() 
{
    int n,f1 = 1,f2 = 1;
    int count;
    int sum = 2;
    scanf("%d",&n);
    if (n == 1) 
    {
        printf("1\n");
        return 0;
    }
    for(int i = 3;i <= n;i++)
    {
        count = f1 + f2;
        f1 = f2;
        f2 = count;
        sum = sum + count;
    }
    printf("%d\n",sum);
    return 0;
}