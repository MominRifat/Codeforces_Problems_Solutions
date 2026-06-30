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

void solve()
{
    ll n, k;
    cin >> n >> k;
    vector<ll> q(n), r(n), lim;
    for (int i = 0; i < n; i++) cin >> q[i];
    for (int i = 0; i < n; i++) cin >> r[i];
    sort(r.begin(), r.end());
    for (int i = 0; i < n; i++)
    {
        lim.push_back((k - q[i]) / (q[i] + 1));
    }
    sort(lim.begin(), lim.end());
    ll i = 0, j = 0, ans = 0;
    while (i < n && j < n)
    {
        if (r[j] <= lim[i])
        {
            ans++;
            i++;
            j++;
        }
        else
        {
            i++;
        }
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