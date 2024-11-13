// Created By Momin_Rifat
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        vector<int> arr(n);
        long long int totalSum = 0;
        int count_1 = 0;
        for(int i = 0; i < n; i++)
        {
            cin >> arr[i];
            totalSum = totalSum + arr[i];
            if(arr[i] == 1)
            {
                count_1++;
            }
        }
        if(totalSum >= count_1 + n && n > 1)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}