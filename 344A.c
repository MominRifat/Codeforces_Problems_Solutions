//Created By Momin_Rifat
#include<stdio.h>
int main() 
{
    int n;
    int position[100001];
    int count_group = 1;
    
    scanf("%d",&n);

    for(int i=0;i<n;i++) 
    {
        scanf("%d",&position[i]);
    }

    for(int j=1;j<n;j++) 
    {
        if(position[j] != position[j - 1]) 
        {
            count_group++;
        }
    }

    printf("%d\n",count_group);

    return 0;
}