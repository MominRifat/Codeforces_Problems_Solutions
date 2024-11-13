//Created By Momin_Rifat
#include<stdio.h>
void calculation(int a)
{
    int number_store[101];

    for(int i=0;i<a;i++)
    {
        scanf("%d",&number_store[i]);
    }

    for(int j=1;j<=a;j++)
    {
        for(int i=0;i<a;i++)
        {
            if(number_store[i] == j)
            {
                printf("%d ",i+1);
            }
        }
    }
}
int main()
{
    int n;

    scanf("%d",&n);
    
    calculation(n);

    return 0;
}