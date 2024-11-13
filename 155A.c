//Created By Momin_Rifat
#include<stdio.h>
int main()
{
    int n;
    int count = 0;
    scanf("%d",&n);
    int points[n];

    for(int i = 0; i < n; i++)
    {
        scanf("%d",&points[i]);
    }

    int max = points[0];
    int min = points[0];

    for(int j = 0; j < n ; j++)
    {
        if(max < points[j])
        {
            max = points[j];
            count++;
        }
        if(min > points[j])
        {
            min = points[j];
            count++; 
        }
    }
    printf("%d",count);
    return 0;
}