//Created By Momin_Rifat
#include<stdio.h>
int main() 
{
    int n,m;
    scanf("%d %d",&n,&m);

    int count = 0;
    while(n != m) 
    {
        if(m % 2 == 0 && m > n) 
        {
            m /= 2;
        } 
        else 
        {
            m++;
        }
        count++;
    }

    printf("%d",count);
    return 0;
}