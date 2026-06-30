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
    int n,k;
    cin >> n >> k;
    if(n * n - 1 == k)
    {
        no;
        return;
    }
    char grid[n][n];
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(j == n - 1) grid[i][j] = 'L';
            else grid[i][j] = 'R';
        }
    }
    int i, j, c;
    i = j = c = 0;
    while(c < k)
    {
        grid[i][j] = 'L';
        j++;
        c++;
        if(j == n)
        {
            j = 0;
            i++;
        }
    }
    if(k % n == n - 1)
    {
        int row = k / n;
        grid[row][n - 1] = 'D';
        grid[row + 1][n - 1] = 'U';
    }
    yes;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++) cout << grid[i][j];
        cout << endl;
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
    cin >> tc;
    while(tc--)
    {
       solve();
    }
    return 0;
}