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

const int N = 1e5 + 5;
vector<ll> vertex[N];
vector<ll> vis(N,0);
vector<ll> rep;
vector<pair<ll,ll>> edge;
void dfs(ll v)
{
    vis[v] = 1;
    for(auto child : vertex[v])
    {
        if(vis[child]) continue;
        dfs(child);
    }
}
void solve()
{
    int n, e;
    cin >> n >> e;
    for(int i = 0; i < e; i++)
    {
        ll u, v;
        cin >> u >> v;
        vertex[u].push_back(v);
        vertex[v].push_back(u);
    }
    for(ll i = 1; i <= n; i++)
    {
        if(vis[i]) continue;
        rep.push_back(i);
        dfs(i);
    }
    for(int i = 1; i < rep.size(); i++)
    {
        edge.push_back({rep[i-1], rep[i]});
    }
    cout << edge.size() << endl;
    for(auto it : edge)
    {
        cout << it.first << " " << it.second << endl;
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