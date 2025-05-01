// Created By Momin_Rifat
#include<bits/stdc++.h>
using namespace std;
long long int highestH(long long int n, long long int mid,const vector<long long int>& arr)
{
    long long int water = 0;
    for(int i = 0; i < n; i++)
    {
        if(mid > arr[i]) water += (mid - arr[i]);
    }
    return water;
}
void solve()
{
    long long int n,w;
    cin >> n >> w;
    vector<long long int> arr(n);
    for(int i = 0; i < n; i++) cin >> arr[i];
    long long int low = 1;
    long long int high = 2e9+7;
    long long int mid;
    while(high - low > 1)
    {
        mid = (high + low) / 2;
        if(highestH(n,mid,arr) <= w)
        {
            low = mid;
        }
        else
        {
            high = mid;
        }
    }
    cout << low << endl;
}
int main()
{
    ios :: sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int tc = 1;
    cin >> tc;
    while(tc--)
    {
       solve();
    }
    return 0;
}