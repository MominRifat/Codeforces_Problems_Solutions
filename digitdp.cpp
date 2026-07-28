// Created By Momin_Rifat
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
#define ll long long
#define endl '\n'
int k;
string s;
ll dp[20][172][2][2];
bool vis[20][172][2][2];

ll digdp(int pos, int sum, int tight, int start)
{
    if (pos == s.size())
    {
        return (sum == k);
    }
    if (vis[pos][sum][tight][start]) return dp[pos][sum][tight][start];
    vis[pos][sum][tight][start] = true;
    ll ans = 0;
    int limit;
    if (tight) limit = s[pos] - '0';
    else limit = 9;
    for (int digit = 0; digit <= limit; digit++)
    {
        int newtight = tight && (digit == limit);
        int newstart = start || (digit != 0);
        int newsum = sum;
        if (newstart)
        {
            newsum += digit;
        }
        ans += digdp(pos + 1, newsum, newtight, newstart);
    }
    return dp[pos][sum][tight][start] = ans;
}

ll sol(ll x)
{
    if(x < 0) return 0;
    s = to_string(x);
    memset(vis, 0, sizeof(vis));
    return digdp(0, 0, 1, 0);
}

void solve()
{
    ll l, r;
    cin >> l >> r >> k;
    cout << sol(r) - sol(l - 1) << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    #ifndef ONLINE_JUDGE 
        freopen("input.txt", "r", stdin); 
        freopen("output.txt", "w", stdout); 
    #endif
    int tc;
    cin >> tc;
    while (tc--)
    {
        solve();
    }
    return 0;
}