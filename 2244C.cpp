// Created By Momin_Rifat
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define yes cout << "YES" << '\n'
#define no cout << "NO" << '\n'
const ll N = 2e5 + 7;
vector<ll> adj[N + 1];
vector<ll> vid(N);
ll n, x, y;

void dfs(ll node, ll id)
{
    vid[node] = id;
    for (auto child : adj[node])
    {
        if (vid[child] != -1) continue;
        dfs(child, id);
    }
}

void solve()
{
    cin >> n >> x >> y;
    vector<int> a(n + 1);
    for(int i = 1; i <= n; i++) cin >> a[i];
    for(int i = 1; i <= n; i++) adj[i].clear();
    for(int i = 1; i <= n; i++)
        vid[i] = -1;
    for(int i = 1; i + x <= n; i++)
    {
        adj[i].push_back(i + x);
        adj[i + x].push_back(i);
    }
    for(int i = 1; i + y <= n; i++)
    {
        adj[i].push_back(i + y);
        adj[i + y].push_back(i);
    }
    ll id = 0;
    for(int i = 1; i <= n; i++)
    {
        if (vid[i] != -1)
            continue;
        dfs(i, id);
        id++;
    }
    bool ok = true;
    for (int i = 1; i <= n; i++)
    {
        if (vid[i] != vid[a[i]])
        {
            no;
            return;
        }
    }
    yes;
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