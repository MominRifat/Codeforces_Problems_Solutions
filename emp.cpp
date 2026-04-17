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
template <typename T> using oder_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

void solve()
{
    int n,q;
    cin >> n >> q;
    vector<pair<int,int>> a(n);
    for(int i = 0; i < n; i++)
    {
        int x,y;
        cin >> x >> y;
        a[i] = make_pair(x,y);
    }
    sort(a.begin(), a.end(), [](auto &x, auto &y) { return x.second < y.second; });
    multiset<int> prevend;
    for (int i = 0; i < q; i++) prevend.insert(0);
    int count = 0;
    for (auto x : a)
    {
        int st = x.first;
        int end = x.second;
        auto it = prevend.upper_bound(st);
        if (it == prevend.begin()) continue;
        it--;
        prevend.erase(it);
        prevend.insert(end);
        count++;
    }
    cout << count << endl;
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