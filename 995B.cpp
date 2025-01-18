// Created By Momin_Rifat
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin >> tc;
    while(tc--)
    {
        long long int n;
        cin >> n;
        long long int arr[3];
        long long int cycle_sum = 0;
        for(int i = 0; i < 3; i++)
        {
            cin >> arr[i];
            cycle_sum += arr[i];
        }
        long long int full_cycles = n / cycle_sum;
        long long int total_days = full_cycles * 3;
        long long int remaining = n % cycle_sum;
        if (remaining == 0)
        {
            cout << total_days << endl;
        }
        else
        {
            for (int i = 0; i < 3; i++)
            {
                remaining -= arr[i];
                total_days++;
                if (remaining <= 0)
                {
                    cout << total_days << endl;
                    break;
                }
            }
        }
    }
    return 0;
}
