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
int n, m, k;
const int N = 1e5 + 5;
vector<string> adj;
int vis[1005][1005];
vector<int> par(N, -1);
vector<pair<int, int>> order;
vector<int> dx = {-1, 1, 0, 0};
vector<int> dy = {0, 0, -1, 1};
void dfs(int u, int v)
{
    vis[u][v] = 1;
    order.push_back({u, v});
    for(int i = 0; i < 4; i++)
    {
        int nx = u + dx[i];
        int ny = v + dy[i];
        if(nx < 0 || ny < 0 || nx >= n || ny >= m) continue;
        if (vis[nx][ny] || adj[nx][ny] != '.') continue;
        dfs(nx,ny);
    }
}
void solve()
{
    cin >> n >> m >> k;
    adj.resize(n);
    for(int i = 0; i < n; i++)
    {
        cin >> adj[i];
    }
    bool found = false;
    for(int i = 0; i < n && !found; i++)
    {
        for(int j = 0; j < m; j++)
        {
            if(adj[i][j] == '.')
            {
                found = true;
                dfs(i,j);
                break;
            }
        }
    }
    int sz = order.size();
    for(int i = sz - 1; i >= sz - k; i--)
    {
        int x = order[i].first;
        int y = order[i].second;
        adj[x][y] = 'X';
    }
    for(auto s : adj)
    {
        cout << s << endl;
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