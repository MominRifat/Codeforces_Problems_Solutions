//Created By Momin_Rifat
#include<stdio.h>
int main()
{
    int n;
    int number[101];
    int sum = 0;
    double avg;

    scanf("%d",&n);

    for(int i = 0;i < n;i++)
    {
        scanf("%d",&number[i]);
        sum = sum + number[i];
    }

    avg = (double)sum / (double)n;

    printf("%.12f\n",avg);

    return 0;
}