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
    int n,q,cnt = 0;
    cin >> n >> q;
    vector<int> a(n), b(n);
    int s = sqrt(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    for(int i = 0; i < n; i += s)
    {
        b[i / s] = *max_element(a.begin() + i, a.begin() + i + s);
    }
    while(q--)
    {
        int l, r;
        cin >> l >> r;
        l--, r--;
        if(l == r)
        {
            cnt++;
            continue;
        }
        int L = l + 1;
        int R = r - 1;
        int mx = 0;
        while(L <= R)
        {
            if(L % s == 0 && L + s - 1 <= R)
            {
                mx = max(mx, b[L / s]);
                L += s;
            }
            else
            {
                mx = max(mx, a[L]);
                L++;
            }
        }
        if(mx <= a[l]) cnt++;
    }
    cout << cnt << endl;
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