// Created By Momin_Rifat
#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n,m;
    cin >> n >> m;
    vector<int> a(n);
    vector<int> b(m);
    for(int i = 0; i < n; i++) cin >> a[i];
    for(int i = 0; i < m; i++) cin >> b[i];
    int ans = INT_MAX;
    for(auto x : a)
    {
        for(auto y : b)
        {
            if(x == y)
            {
                ans = min(ans,x);
            }
            else
            {
                ans = min(ans, x * 10 + y);
                ans = min(ans, x + y * 10);
            }
        }
    }
    cout << ans << endl;
}
int main()
{
    ios :: sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int tc = 1;
    //cin >> tc;
    while(tc--)
    {
       solve();
    }
    return 0;
}