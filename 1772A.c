#include<stdio.h>
int main()
{
    int a,b,i,n;
    int sum=0;

    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        scanf("%d %d",&a,&b);
        sum = a+b;
        printf("%d\n",sum);
    }
   
    return 0;
}