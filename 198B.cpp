// Created By Momin_Rifat
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin >> tc;
    while(tc--)
    {
        int n;
        cin >> n;
        vector<long long int> v(n);
        for(int i = 0; i < n; i++) cin >> v[i];
        long long int oldmax = 0, mx = 0, count = 0;
        for(int i = 0; i < n; i++)
        {
            oldmax = max(oldmax,v[i]);
            long long int diff = oldmax - v[i];
            count += diff;
            mx = max(mx,diff);
        }
        cout << mx + count << endl;
    }
    return 0;
}