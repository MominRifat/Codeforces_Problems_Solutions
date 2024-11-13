#include<stdio.h>
int main()
{
    int i,n;
    int num1,num2,num3;
    int line=0;

    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        scanf("%d %d %d",&num1,&num2,&num3);
        if(num1+num2+num3>=2)
        {
            line = line + 1;
        }
    }
    printf("%d\n",line);
    return 0;
}