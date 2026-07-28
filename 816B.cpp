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
    int n,k,q;
    cin >> n >> k >> q;
    vector<int> dif(200002, 0);
    for(int i = 0; i < n; i++)
    {
        int l,r;
        cin >> l >> r;
        dif[l]++;
        dif[r + 1]--;
    }
    vector<int> good(200001, 0);
    for (int i = 1; i <= 200000; i++)
    {
        dif[i] = dif[i - 1] + dif[i];
        good[i] = good[i - 1];
        if(dif[i] >= k) good[i]++;
    }
    while(q--)
    {
        int l,r;
        cin >> l >> r;
        cout << good[r] - good[l - 1] << endl;
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