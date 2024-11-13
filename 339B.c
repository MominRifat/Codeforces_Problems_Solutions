//Created By Momin_Rifat
#include <stdio.h>
int main() 
{
    int n,m;
    scanf("%d %d",&n,&m);

    int tasks[m];
    for(int i = 0; i < m; ++i) 
    {
        scanf("%d",&tasks[i]);
    }

    long long time_needed = 0;
    int current_position = 1;

    for(int i = 0; i < m; ++i) 
    {
        if(tasks[i] >= current_position) 
        {
            time_needed += tasks[i] - current_position;
        } 
        else 
        {
            time_needed += n - (current_position - tasks[i]);
        }

        current_position = tasks[i];
    }

    printf("%lld\n",time_needed);

    return 0;
}