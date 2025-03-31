// Created By Momin_Rifat
#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;

    vector<long long int> p(n+1);
    vector<long long int> f(n+1);
    vector<long long int> b(n+1);

    for(int i = 1; i <= n; i++)
    {
        cin >> p[i];
    }
    for(int i = 1; i <= n; i++)
    {
        cin >> f[i];
    }
    for(int i = 1; i <= n; i++)
    {
        cin >> b[i];
    }

    priority_queue<int,vector<int>,greater<int>> q[4][4];
    for(int i = 1; i <= n; i++)
    {
        q[f[i]][b[i]].push(p[i]);
    }

    int m;
    cin >> m;
    while(m--)
    {
        int c;
        cin >> c;
        long long int ans = INT_MAX;
        long long int f,b;

        for(int i = 1; i <= 3; i++)
        {
            if(!q[c][i].empty() && q[c][i].top() < ans)
            {
                ans = q[c][i].top();
                f = c;
                b = i;
            }
        }

        for(int i = 1; i <= 3; i++)
        {
            if(!q[i][c].empty() && q[i][c].top() < ans)
            {
                ans = q[i][c].top();
                f = i;
                b = c;
            }
        }

        if(ans == INT_MAX)
        {
            ans = -1;
        }
        else
        {
            q[f][b].pop();
        }
        cout << ans << " ";
    }
    cout << endl;
}
int main()
{
    ios :: sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int tc = 1;
    //cin >> tc;
    while(tc--)
    {
       solve();
    }
    return 0;
}