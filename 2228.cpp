// Created By Momin_Rifat
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
#define ll long long
#define endl '\n'
#define yes cout << "YES" << '\n'
#define no cout << "NO" << '\n'
template <typename T>
using oder_set = tree<T, null_type, greater_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;
// vector<vector<string>> pre(10, vector<string>(18));
vector<ll> pre[10][10];
void generatenum(int dep, ll cur, int d1, int d2)
{
    pre[d1][d2].push_back(cur);

    if (dep < 17)
    {
        generatenum(dep + 1, cur * 10 + d1, d1, d2);
        generatenum(dep + 1, cur * 10 + d2, d1, d2);
    }
}

void solve()
{
    ll a, n;
    cin >> a >> n;
    // ll mn = LLONG_MAX;
    // for(int i = 0; i < n; i++)
    // {
    //     ll dig = v[i];
    //     for (int j = 1; j <= 17; j++)
    //     {
    //         mn = min(mn, abs(a - stoll(pre[dig][j])));
    //     }
    // }
    // cout << mn << endl;

    // temp.clear();
    // for(int i = 1; i <= 17; i++) generatenum("", i, v[0], v[1]);
    // ll ans = LLONG_MAX;
    // for (ll x : allNum) ans = min(ans, llabs(a - x));
    // cout << ans << endl;

    int d1, d2;
    cin >> d1 >> d2;
    auto &vec = pre[d1][d2];
    if (vec.empty())
    {
        generatenum(0, d1, d1, d2);
        generatenum(0, d2, d1, d2);
        if (d1 == 0) vec.push_back(0);
        sort(vec.begin(), vec.end());
        vec.erase(unique(vec.begin(), vec.end()), vec.end());
    }

    ll ans = LLONG_MAX;
    auto it = lower_bound(vec.begin(), vec.end(), a);
    if (it != vec.end()) ans = min(ans, llabs(*it - a));
    if (it != vec.begin())
    {
        --it;
        ans = min(ans, llabs(*it - a));
    }
    cout << ans << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int tc = 1;
    cin >> tc;
    while (tc--)
    {
        solve();
    }
    return 0;
}