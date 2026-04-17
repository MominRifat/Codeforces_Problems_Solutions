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
const int N = 3e5 + 9;
int a[N];

struct ST
{
    int t[4 * N];
    static const int inf = 1e9;
    ST()
    {
        memset(t, 0, sizeof t);
    }
    int marge(int x, int y)
    {
        return (x + y);
    }

    void build(int n, int b, int e)
    {
        if (b == e)
        {
            t[n] = 1; 
            return;
        }
        int mid = (b + e) >> 1;
        int l = n << 1;
        int r = l | 1;
        build(l, b, mid);
        build(r, mid + 1, e);
        t[n] = marge(t[l], t[r]);
    }

    void upd(int n, int b, int e, int i)
    {
        if (b > i || e < i) return;
        if (b == e && b == i)
        {
            t[n] = 0;
            return;
        }
        int mid = (b + e) >> 1;
        int l = n << 1;
        int r = l | 1;
        upd(l, b, mid, i);
        upd(r, mid + 1, e, i);
        t[n] = marge(t[l], t[r]);
    }

    int query(int n, int b, int e, int req)
    {
        if (b == e) return b; 
        int mid = (b + e) >> 1;
        int l = n << 1;
        int r = l | 1;
        if (t[l] >= req) return query(l,b,mid,req);
        return query(r, mid + 1, e, req - t[l]);
    }
} t;

void solve()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) cin >> a[i]; 
    t.build(1, 1, n);
    for (int i = 1; i <= n; i++)
    {
        int req;
        cin >> req;
        int idx = t.query(1,1,n,req);
        cout << a[idx] << " ";
        t.upd(1,1,n,idx);
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