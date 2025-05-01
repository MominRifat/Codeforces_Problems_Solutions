// Created By Momin_Rifat
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve()
{
    ll n, k;
    cin >> n >> k;
    vector<ll> a(k);
    for(int i = 0; i < k; i++)
    {
        cin >> a[i];
    }
    sort(a.rbegin(), a.rend());
    ll catwalk = 0;
    ll save = 0;
    for(int i = 0; i < k; i++)
    {
        if(a[i] <= catwalk) break;
        catwalk += n - a[i];
        save++;
    }
    cout << save << endl;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int tc = 1;
    cin >> tc;
    while (tc--)
    {
        solve();
    }
    return 0;
}
