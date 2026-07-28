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
    string s;
    cin >> s;
    string num = "";
    for(auto x : s) if(x != '0') num += x;
    if(s.size() == 1)
    {
        cout << 0 << endl;
        return;
    }
    if(num.size() == 0)
    {
        cout << 0 << endl;
        return;
    }
    ll sum;
    ll ans = 0;
    while(1)
    {
        sum = 0;
        for(auto x : num) sum += (x - '0');
        ans++;
        if(sum < 10) break;
        num = to_string(sum);
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
    //cin >> tc;
    while(tc--)
    {
       solve();
    }
    return 0;
}