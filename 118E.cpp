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
using oder_set = tree<T, null_type, greater_equal<T>,
                      rb_tree_tag,
                      tree_order_statistics_node_update>;

ll n, m;
const ll N = 1e5 + 7;
vector<pair<ll, ll>> adj[N];
vector<ll> tin(N), low(N);
ll len = 0;
bool vis[N];
bool pos = true;
vector<pair<int, int>> ans;

void dfs(ll node, ll par)
{
    vis[node] = true;
    len++;
    tin[node] = len;
    low[node] = len;
    for(auto x : adj[node])
    {
        ll next = x.first;
        ll id = x.second;
        if(id == par) continue;
        if (vis[next])
        {
            if(tin[next] < tin[node])
            {
                ans[id] = {node, next};
                low[node] = min(low[node], tin[next]);
            }
            continue;
        }
        ans[id] = {node, next};
        dfs(next, id);
        low[node] = min(low[node], low[next]);
        if (low[next] > tin[node])
        {
            pos = false;
        }
    }
}

void solve()
{
    cin >> n >> m;
    ans.resize(m);
    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        adj[u].push_back({v, i});
        adj[v].push_back({u, i});
    }
    dfs(1, -1);
    if(!pos)
    {
        cout << 0 << endl;
    }
    else
    {
        for (auto x : ans)
        {
            cout << x.first << " " << x.second << endl;
        }
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
    while (tc--)
    {
        solve();
    }
    return 0;
}