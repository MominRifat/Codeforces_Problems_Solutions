// Created By Momin_Rifat
#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n,k;
    cin >> n >> k;
    vector<int> l(n),r(n);
    for(int i = 0; i < n; i++) cin >> l[i];
    for(int i = 0; i < n; i++) cin >> r[i];
    vector<int> remain;
    long long int ans = 0;
    for(int i = 0; i < n; i++)
    {
        ans += max(l[i],r[i]);
        remain.push_back(min(l[i],r[i]));
    }
    sort(remain.rbegin(),remain.rend());
    for(int i = 0; i < k - 1; i++) ans += remain[i];
    cout << ans + 1 << endl;
}
int main()
{
    ios :: sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int tc = 1;
    cin >> tc;
    while(tc--)
    {
       solve();
    }
    return 0;
}