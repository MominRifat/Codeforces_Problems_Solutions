// Created By Momin_Rifat
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define yes cout << "YES" << '\n'
#define no cout << "NO" << '\n'

int n, m;
char adj[1007][1007];
int vis[1007][1007];
int par[1007][1007];
stack<int> st;
void dfs(int x, int y)
{
    vis[x][y] = 1;
    if(x - 1 >= 1 && !vis[x - 1][y] && adj[x - 1][y] == '.') dfs(x - 1, y);
    if(x + 1 <= n && !vis[x + 1][y] && adj[x + 1][y] == '.') dfs(x + 1, y);
    if(y - 1 >= 1 && !vis[x][y - 1] && adj[x][y - 1] == '.') dfs(x, y - 1);
    if(y + 1 <= m && !vis[x][y + 1] && adj[x][y + 1] == '.') dfs(x, y + 1);
    if(adj[x][y] == 'B') yes;
    else no;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin >> n >> m;
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= m; j++)
        {
            cin >> adj[i][j];
        }
    }
    int x,y;
    x = y = 0;
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= m; j++)
        {
            if(adj[i][j] == 'A')
            {
                x = i;
                y = j;
            }
        }
    }
    for (int i = x; i <= n; i++)
    {
        for (int j = y; j <= m; j++)
        {
            if(!vis[i][j])
            {
                dfs(i, j);
            }
        }
    }
    return 0;
}