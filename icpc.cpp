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
    int n;
    cin >> n;
    vector<int> a(n);
    int even = 0;
    int odd = 0;
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
        if(a[i] % 2 == 0) even++;
        else odd++;
    }
    if(a[n - 1] % 2 == 0)
    {
        int cnt = 0;
        for(int i = n - 1; i >= 0; i--)
        {
            if(a[i] % 2 == 0) cnt++;
            else break;
        }
        //cout << "cnt1 : " << cnt << endl;
        cout << even - cnt + 1 << endl;
    }
    else
    {
        int cnt = 0;
        for(int i = n - 1; i >= 0; i--)
        {
            if (a[i] % 2 == 1) cnt++;
            else break;
        }
        //cout << "cnt2 : " << cnt << endl;
        cout << odd - cnt + 1 << endl;
    }
    // if((even == 0 && odd != 0) || (odd == 1 && ((a[0] % 2 == 1) || (a[n - 1] % 2 == 1)))) 
    // {
    //     cout << 1 << endl;
    // }
    // else if((even != 0 && odd == 0) || (even == 1 && ((a[0] % 2 == 0) || (a[n - 1] % 2 == 0)))) 
    // {
    //     cout << 1 << endl;
    // }
    // else if((even == 1 && ((a[0] % 2 != 0) && (a[n - 1] % 2 != 0))))
    // {
    //     cout << 2 << endl;
    // }
    // else if((odd == 1 && ((a[0] % 2 != 1) && (a[n - 1] % 2 != 1))))
    // {
    //     cout << 2 << endl;
    // }
    // else 
    // {
    //     cout << max(even,odd) << endl;
    // }
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