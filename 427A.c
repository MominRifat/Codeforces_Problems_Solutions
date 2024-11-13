//Created By Momin_Rifat
#include<stdio.h>
int untreated_crimes(int n, int events[]) 
{
    int untreated_count = 0;
    int officers_available = 0;

    for(int i = 0; i < n; i++) 
    {
        if(events[i] == -1) 
        {
            if(officers_available == 0) 
            {
                untreated_count++;
            } 
            else 
            {
                officers_available--;
            }
        } 
        else 
        {
            officers_available += events[i];
        }
    }

    return untreated_count;
}

int main() 
{
    int n;
    scanf("%d",&n);

    int events[n];
    for (int i = 0; i < n; i++) 
    {
        scanf("%d",&events[i]);
    }

    int result = untreated_crimes(n,events);
    printf("%d\n",result);

    return 0;
}