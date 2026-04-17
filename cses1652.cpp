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
    int n,q;
    cin >> n >> q;
    vector<vector<int>> prefsum(n + 1, vector<int>(n + 1, 0));
    vector<string> s(n + 1);
    for (int i = 1; i <= n; i++) cin >> s[i];
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (s[i][j - 1] == '*') prefsum[i][j] = 1;
        }
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            prefsum[i][j] += prefsum[i - 1][j];
        }
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            prefsum[i][j] += prefsum[i][j - 1];
        }
    }
    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= n; j++)
    //     {
    //         cout << prefsum[i][j] << " ";
    //     }
    //     cout << "\n";
    // }
    while(q--)
    {
        int x1,y1,x2,y2;
        cin >> x1 >> y1 >> x2 >> y2;
        cout << prefsum[x2][y2] - prefsum[x1 - 1][y2] - prefsum[x2][y1 - 1] + prefsum[x1 - 1][y1 - 1] << endl;
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