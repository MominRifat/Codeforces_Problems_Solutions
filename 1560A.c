//Created By Momin_Rifat
#include <stdio.h>
int is_disliked(int num) 
{
    return num % 3 == 0 || num % 10 == 3;
}

int find_kth_element(int k) 
{
    int count = 0;
    int current = 1;

    while (count < k) 
    {
        if (!is_disliked(current)) 
        {
            count++;
        }
        if (count < k) 
        {
            current++;
        }
    }

    return current;
}

int main() 
{
    int t;
    scanf("%d", &t);

    while (t--) 
    {
        int k;
        scanf("%d", &k);
        int result = find_kth_element(k);
        printf("%d\n", result);
    }

    return 0;
}