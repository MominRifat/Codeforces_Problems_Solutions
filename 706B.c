//Created By Momin_Rifat
#include<stdio.h>
#include<stdlib.h>
int compare(const void *a, const void *b) 
{
    return (*(int *)a - *(int *)b);
}

int binarySearch(int arr[], int low, int high, int x) 
{
    while (low <= high) 
    {
        int mid = low + (high - low) / 2;

        if (arr[mid] <= x) 
        {
            low = mid + 1;
        } 
        else 
        {
            high = mid - 1;
        }
    }
    return low;
}

int main() 
{
    int n;
    scanf("%d", &n);
    int drink_price[n];
    for (int i = 0; i < n; i++) 
    {
        scanf("%d", &drink_price[i]);
    }
    qsort(drink_price, n, sizeof(int), compare);

    int q;
    scanf("%d", &q);
    int ith_day_taka[q];
    for (int i = 0; i < q; i++) 
    {
        scanf("%d", &ith_day_taka[i]);
    }

    for (int i = 0; i < q; i++) 
    {
        int count = binarySearch(drink_price, 0, n - 1, ith_day_taka[i]);
        printf("%d\n", count);
    }

    return 0;
}