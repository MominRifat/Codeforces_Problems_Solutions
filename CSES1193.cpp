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

int n, m;
vector<string> grid;
pair<int, int> st, ed;
bool vis[1005][1005];
int dx[] = {-1, 1, 0, 0};
int dy[] = {0, 0, -1, 1};
char pre[1005][1005];
char dir[] = {'U', 'D', 'L', 'R'};

void bfs()
{
    queue<pair<int,int>> q;
    q.push(st);
    vis[st.first][st.second] = true;
    while(!q.empty())
    {
        auto cur = q.front();
        q.pop();
        int x = cur.first;
        int y = cur.second;
        for(int i = 0; i < 4; i++)
        {
            int nx = x + dx[i];
            int ny = y + dy[i];
            if(nx < 0 || nx >= n || ny < 0 || ny >= m) continue;
            if(vis[nx][ny] || grid[nx][ny] == '#') continue;
            vis[nx][ny] = true;
            pre[nx][ny] = dir[i];
            q.push({nx, ny});
        }
    }
}
void solve()
{
    cin >> n >> m;
    grid.resize(n);
    for(int i = 0; i < n; i++)
    {
        cin >> grid[i];
        for(int j = 0; j < m; j++)
        {
            if(grid[i][j] == 'A') st = {i, j};
            if(grid[i][j] == 'B') ed = {i, j};
        }
    }
    bfs();
    if (!vis[ed.first][ed.second])
    {
        cout << "NO" << endl;
        return;
    }
    string ans = "";    
    int x = ed.first, y = ed.second;
    while(make_pair(x, y) != st)
    { 
        char c = pre[x][y];
        ans += c;
        if(c == 'U') x++;
        else if (c == 'D') x--;
        else if (c == 'L') y++;
        else y--;
    }

    reverse(ans.begin(), ans.end());
    cout << "YES" << endl;
    cout << ans.size() << endl;
    cout << ans << endl;
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