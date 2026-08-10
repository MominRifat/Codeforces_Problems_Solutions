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
    int n, k;
    cin >> n >> k;
    if (n > 1 && n - 1 == k)
    {
        cout << -1 << endl;
        return;
    }
    k = n - k;
    int c0 = (n + 1) / 2, c1 = n / 2;
    for(int i = 1; i <= k; ++i)
    {
        if(i & 1)
        {
            if(i + 2 > k)
            {
                while (c0--) cout << 0;
            }
            else
            {
                --c0;
                cout << 0;
            }
        }
        else
        {
            if (i + 2 > k)
            {
                while (c1--) cout << 1;
            }
            else
            {
                --c1;
                cout << 1;
            }
        }
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
    cin >> tc;
    while(tc--)
    {
       solve();
    }
    return 0;
}