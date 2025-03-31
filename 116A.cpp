// Created By Momin_Rifat
#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    int mx = 0;
    int ans = 0;
    while(n--)
    {
        int a,b;
        cin >> a >> b;
        ans -= a;
        ans += b;
        mx = max(ans,mx);
    }
    cout << mx << endl;
}
int main()
{
    ios :: sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    //int tc;
    //cin >> tc;
    //while(tc--)
    //{
       solve();
    //}
    return 0;
}