// Created By Momin_Rifat
#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i = 0; i <n ; i++)
    {
        cin >> arr[i];
    }
    long long int sum = 0;
    int ans = 0;
    int mx = 0;
    for(auto x : arr)
    {
        sum += x;
        mx = max(x,mx);
        if(sum == mx*2)
        {
            ans++;
        }
    }
    cout << ans << endl;
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