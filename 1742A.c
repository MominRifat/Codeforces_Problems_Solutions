#include<stdio.h>
int main()
{
    int i,n;
    int num1,num2,num3;

    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        scanf("%d %d %d",&num1,&num2,&num3);
        if(num1+num2==num3||num1+num3==num2||num2+num3==num1)
        {
            printf("Yes\n");
        }
        else 
        {
            printf("No");
        }
        printf("\n");

    }
    return 0;
}