//Created By Momin_Rifat
#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a;
    int b;
    a = 8;
    b = n - a;
    int count = 0;
    for(int i = 2; i <= b/2; i++)
    {
        if(b % i == 0)
        {
            count++;
            break;
        }
    }
    if(count == 0)
    {
        a = a + 1;
        b = b - 1;
        printf("%d %d",a,b);
    }
    if(count == 1)
    {
        printf("%d %d",a,b);
    }
    return 0;
}