// Created By Momin_Rifat
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin >> tc;
    while(tc--)
    {
        int n,k;
        cin >> n >> k;
        vector<int> arr(n);
        int count = 0;
        int total_gold = 0;
        for(int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if(arr[i] >= k)
            {
                total_gold += arr[i];
            }
            if(arr[i] == 0 && total_gold > 0)
            {
                count++;
                total_gold--;
            }
        }
        cout << count << endl;
    }
    return 0;
}