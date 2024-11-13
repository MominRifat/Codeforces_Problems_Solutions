//Created By Momin_Rifat
#include<stdio.h>
int main()
{
    int n,k;
    scanf("%d %d",&n,&k);

    int number[n];
    for(int i = 0; i < n; i++)
    {
        scanf("%d",&number[i]);
        number[i] = 5 - number[i];
    }
    
    int count = 0;
    for(int i = 0; i < n; i++)
    {
        if(number[i] >= k)
        {
            count++;
        }
    }
    int team = count / 3;
    printf("%d",team);
    return 0;
}