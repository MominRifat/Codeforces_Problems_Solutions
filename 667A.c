#include<stdio.h>
int main()
{
    int n,h;
    scanf("%d %d",&n,&h);

    int number[1001];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&number[i]);
    }

    int min_width = 0;
    for(int i=0;i<n;i++)
    {
        if(number[i] <= h)
        {
            min_width = min_width + 1;
        }
        else
        {
            min_width = min_width + 2;
        }
    }

    printf("%d",min_width);
    return 0;
}