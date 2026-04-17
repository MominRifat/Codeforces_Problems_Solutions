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

void solve(int tc)
{
    cout << "Case " << tc << ":\n";

    int n;
    cin >> n;
    vector<ll> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    int q;
    cin >> q;

    vector<ll> ms(q);
    for (int i = 0; i < q; i++)
        cin >> ms[i];

    vector<ll> useful;

    for (int i = 0; i < q; i++)
    {
        if (useful.empty() || ms[i] < useful.back())
            useful.push_back(ms[i]);
    }

    for (auto m : useful)
    {
        for (int i = 0; i < n; i++)
        {
            if (a[i] >= m)
                a[i] %= m;
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (i == n - 1)
            cout << a[i] << endl;
        else
            cout << a[i] << " ";
    }
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
    for (int i = 1; i <= tc; i++)
    {
        solve(i);
    }
    return 0;
}