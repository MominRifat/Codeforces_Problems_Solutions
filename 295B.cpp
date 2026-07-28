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
const ll N = 510;
const ll INF = 1e9 + 10;
ll dis[N][N];
void solve()
{
    ll n;
    cin >> n;
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= n; j++)
        {
            cin >> dis[i][j];
        }
    }
    vector<ll> delorder(n);
    for(int i = 0; i < n; i++)
    {
        cin >> delorder[i];
    }
    reverse(delorder.begin(), delorder.end());
    vector<ll> ans;
    for(int k = 0; k < n; k++)
    {
        int kv = delorder[k];
        for(int i = 1; i <= n; i++)
        {
            for(int j = 1; j <= n; j++)
            {
                ll newdist = dis[i][kv] + dis[kv][j];
                dis[i][j] = min(dis[i][j], newdist);
            }
        }
        ll sum = 0;
        for(int i = 0; i <= k; i++)
        {
            for(int j = 0; j <= k; j++)
            {
                sum += dis[delorder[i]][delorder[j]];
            }
        }
        ans.push_back(sum);
    }
    reverse(ans.begin(), ans.end());
    for(auto x : ans)
    {
        cout << x << " ";
    }
    cout << endl;
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