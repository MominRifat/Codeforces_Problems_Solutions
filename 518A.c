//Created By Momin_Rifat
#include<stdio.h>
int main()
{
    int a,b;

    scanf("%d %d",&a,&b);
    int c;

    if(a < b)
    {
        c = a;
    }
    else
    {
        c = b;
    }
    int new_a = a - c;
    int new_b = b - c;

    int d = (new_a/2) + (new_b/2);

    printf("%d %d",c,d);
    return 0;
}