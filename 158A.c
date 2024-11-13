#include <stdio.h>
int main() 
{
    int i,n,k;
    scanf("%d %d",&n,&k);
    
    int nums[n];

    for(i=0;i<n;i++) 
    {
        scanf("%d",&nums[i]);
    }
    
    int score = nums[k - 1];
    int count = 0;
    
    for (int i = 0; i < n; i++) 
    {
        if (nums[i] >= score && nums[i] > 0) 
        {
            count++;
        }
    }
    
    printf("%d\n",count);
    
    return 0;
}