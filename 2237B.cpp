// Created By Momin_Rifat
#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
#define ll long long
#define endl '\n'
#define yes cout << "YES" << '\n'
#define no cout << "NO" << '\n'
template <typename T> using oder_set = tree<T, null_type, greater_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;

void solve()
{
    ll n;
    cin >> n;
    vector<ll> a(n), b(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n; i++) cin >> b[i];

    vector<int> c(n);
    set<int> s;

    for (int i = 1; i <= n; i++) s.insert(i);

    bool ok = true;

    for (int i = 0; i < n; i++)
    {
        int L = lower_bound(b.begin(), b.end(), a[i]) - b.begin() + 1;

        auto it = s.lower_bound(L);

        if (it == s.end())
        {
            ok = false;
            break;
        }

        c[i] = *it;
        s.erase(it);
    }

    if (!ok)
    {
        cout << -1 << '\n';
        return;
    }

    long long ans = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (c[i] > c[j])
                ans++;
        }
    }

    cout << ans << '\n';
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
    while(tc--)
    {
       solve();
    }
    return 0;
}