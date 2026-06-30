// Created By Momin_Rifat
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
#define ll long long
#define endl '\n'
#define yes cout << "YES" << '\n'
#define no cout << "NO" << '\n'
template <typename T>
using oder_set = tree<T, null_type, greater_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;

void solve()
{
    int a, b, x;
    cin >> a >> b >> x;
    if (a < b) swap(a, b);
    if (a == b)
    {
        cout << 0 << endl;
        return;
    }
    if(x == 1)
    {
        cout << abs(a - b) << endl;
        return;
    }
    if(a < x)
    {
        cout << min(2, abs(a - b)) << endl;
        return;
    }
    if(a / x == b)
    {
        cout << 1 << endl;
        return;
    }
    int inia = a;
    int inib = b;
    int ans = 0;
    while (a != b)
    {
        if(a < b) swap(a, b);
        //cout << "a" << a << " b" << b << endl;
        int ck = a - b;
        // if(a % ck == b)
        // {
        //     cout << 1 << endl;
        //     return;
        // }
        if (a / x == b)
        {
            cout << ans + 1 << endl;
            return;
        }
        if(a % ck == 0 && b % ck == 0)
        {
            cout << ans + ck << endl;
            return;
        }
        if (a - b >= x)
        {
            if (a - b == x && x < b)
            {
                ans++;
                b++;
                continue;
            }

            a /= x;
            //cout << "a" << a << " ";
            ans++;
            //cout << "ans" << ans << endl;
        }
        else
        {
            if (a - b < x)
            {
                if(a - b > b)
                {
                    a = a/x;
                    ans++;
                    continue;
                }
                ans ++;
                b ++;
            }
        }
    }
    ans = min(ans, inia - inib);
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
    while (tc--)
    {
        solve();
    }
    return 0;
}