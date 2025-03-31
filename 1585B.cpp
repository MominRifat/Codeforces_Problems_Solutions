// Created By Momin_Rifat
#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int ans = 0;
    int exchange = -1;
    for(int i = n - 1; i >= 0; i--)
    {
        if(arr[i] > exchange)
        {
            ans++;
            exchange = arr[i];
        }
    }
    ans--;
    cout << ans << endl;
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