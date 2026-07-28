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
    int k;
    cin >> k;
    vector<ll> a(k);
    ll mx = INT64_MIN;
    int cnt = 0;
    for(int i = 0; i < k; i++)
    {
        ll x;
        cin >> x;
        if(x > 2) mx = max(mx, x);
        if(x == 2) cnt++;
    }
    //cout << "cnt" << cnt << endl;
    if(cnt > 1 || mx > 2) yes;
    else no;
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