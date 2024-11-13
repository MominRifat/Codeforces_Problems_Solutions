//Created By Momin_Rifat
#include<stdio.h>
int main() 
{
    int n;
    scanf("%d",&n);
    int groups[n];
    int count[5] = {0};

    for(int i = 0; i < n; i++) 
    {
        scanf("%d", &groups[i]);
        count[groups[i]]++;
    }

    int taxis = count[4] + count[3];

    count[1] -= count[3];
    if(count[1] < 0) 
    {
        count[1] = 0;
    }

    taxis += (count[2] * 2 + count[1] + 3) / 4;

    printf("%d\n",taxis);

    return 0;
}