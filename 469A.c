//Created By Momin_Rifat
#include<stdio.h>
int main() 
{
    int n,p,q;
    int level_not_count = 0;

    scanf("%d",&n);

    int level_p[n];
    int level_q[n];

    scanf("%d",&p);
    for(int i = 0; i < p; i++) 
    {
        scanf("%d",&level_p[i]);
    }

    scanf("%d", &q);
    for(int i = 0; i < q; i++) 
    {
        scanf("%d",&level_q[i]);
    }

    for(int j = 1; j <= n; j++) 
    {
        int can_pass = 0;
        for(int z = 0; z < p; z++) 
        {
            if(j == level_p[z]) 
            {
                can_pass = 1;
                break;
            }
        }
        for(int z = 0; z < q; z++) 
        {
            if (j == level_q[z]) 
            {
                can_pass = 1;
                break;
            }
        }
        if(!can_pass) 
        {
            level_not_count++;
        }
    }

    if(level_not_count == 0) 
    {
        printf("I become the guy.");
    } 
    else 
    {
        printf("Oh, my keyboard!");
    }

    return 0;
}