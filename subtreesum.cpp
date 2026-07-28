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
const ll N = 1e5 + 5;
vector<ll> vertex[N];
vector<ll> subtree_sum(N, 0);
vector<ll> subtree_even(N, 0);
void dfs(ll v, ll par)
{
    subtree_sum[v] += v;
    if(v % 2 == 0) subtree_even[v] ++;
    for(auto child : vertex[v])
    {
        if(child == par) continue;
        dfs(child, v);
        subtree_sum[v] += subtree_sum[child];
        subtree_even[v] += subtree_even[child];
    }
}
void solve()
{
    ll n;
    cin >> n;
    for(int i = 0; i < n - 1; i++)
    {
        ll u, v;
        cin >> u >> v;
        vertex[u].push_back(v);
        vertex[v].push_back(u);
    }
    dfs(1, -1);
    for(int i = 1; i <= n; i++)
    {
        cout << subtree_sum[i] << " ";
        cout << subtree_even[i] << " " << endl;
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
    //cin >> tc;
    while(tc--)
    {
       solve();
    }
    return 0;
}