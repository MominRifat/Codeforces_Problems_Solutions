// Created By Momin
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
    int n;
    cin >> n;
    string s;
    cin >> s;
    int gp = 1;
    for(int i = 1; i < n; i++)
    {
        if(s[i] != s[i - 1])
        {
            gp++;
        }
    }
    //cout << gp << endl;
    int ans = gp;
    for(int i = 1; i <= n - 2; i++)
    {
        int cnt = 0;
        if(s[i - 1] == s[i + 1] && s[i] != s[i + 1])
        {
            cnt = -2;
        }
        else if (s[i] != s[i + 1] && s[i] != s[i - 1])
        {
            cnt = -1;
        }
        ans = min(ans, gp + cnt);
    }
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
    cin >> tc;
    while(tc--)
    {
       solve();
    }
    return 0;
}

