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

map<string, int> sq;
void solve()
{
    int n;
    cin >> n;
    string nwn = to_string(n);
    vector<ll> a;
    for (auto x : nwn) a.push_back(x - '0');
    map<string, int> set;
    for (ll mask = 0; mask < (1 << nwn.size()); mask++)
    {
        string s = "";
        for (ll i = 0; i < nwn.size(); i++)
        {
            if (mask & (1LL << i)) s += to_string(a[i]);
        }
        if (s.empty()) continue;
        if (s[0] == '0') continue;
        set[s] = 1;
    }
    string ans = "";
    ll mx = -1;
    int flag = 0;
    for (auto x : set)
    {
        //cout << "x.first " << x.first << endl;
        if (sq[x.first])
        {
            ll len = x.first.size();
            if (len > mx)
            {
                flag = 1;
                ans = x.first;
                mx = len;
            }
        }
    }
    if(flag) cout << nwn.size() - ans.size() << endl;
    else cout << -1 << endl;
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
    for (ll i = 1; i <= 1e5; i++) sq[to_string(i * i)] = 1;
    int tc = 1;
    cin >> tc;
    while (tc--)
    {
        solve();
    }
    return 0;
}