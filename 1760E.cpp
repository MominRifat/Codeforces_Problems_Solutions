// Created By Momin_Rifat
#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin  >> n;
    long long int arr[n];
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    long long int zero = 0;
    long long int ans = 0;
    for(int i = n - 1; i >= 0; i--)
    {
        if(arr[i] == 0) zero++;
        else ans += zero;
    }
    long long int index = -1;
    for(int i = 0; i < n; i++)
    {
        if(arr[i] == 0) 
        {
            arr[i] = 1;
            index = i;
            break;
        }
    }
    long long int zero2 = 0;
    long long int ans2 = 0;
    for(int i = n - 1; i >= 0; i--)
    {
        if(arr[i] == 0) zero2++;
        else ans2 += zero2;
    }
    if(index != -1)
    {
        arr[index] = 0;
    }
    long long int mx = max(ans,ans2);
    int last = -1;
    for(int i = n - 1; i >= 0; i--)
    {
        if(arr[i] == 1) 
        {
            arr[i] = 0;
            last = i;
            break;
        }
    }
    long long int zero3 = 0;
    long long int ans3 = 0;
    for(int i = n - 1; i >= 0; i--)
    {
        if(arr[i] == 0) zero3++;
        else ans3 += zero3;
    }
    cout << max(mx,ans3) << endl;
}
int main()
{
    ios :: sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int tc;
    cin >> tc;
    while(tc--)
    {
        solve();
    }
    return 0;
}
