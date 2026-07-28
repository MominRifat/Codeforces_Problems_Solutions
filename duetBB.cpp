// Created By Momin_Rifat
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
#define ll long long
#define endl '\n'
template <typename T>
using oder_set = tree<T, null_type, greater_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;

void solve()
{
    ll n;
    cin >> n;
    vector<ll> a(n);
    int L = -1, R = -1;
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
        if(a[i] != 1)
        {
            if(L == -1) L = i;
            R = i;
        }
    }
    if(L == -1)
    {
        cout << 0 << endl;
        return;
    }

    bool same = true;
    for(int i = L; i <= R; i++)
    {
        if(a[i] != a[L])
        {
            same = false;
            break;
        }
    }

    if(same) cout << 1 << endl;
    else cout << 2 << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
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