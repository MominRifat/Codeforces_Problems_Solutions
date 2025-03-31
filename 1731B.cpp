// Created By Momin_Rifat
#include<bits/stdc++.h>
using namespace std;
const int mod = 1000000007;
void solve()
{
    long long int n;
    cin >> n;
    long long int ans = (2022 * ((n * (n + 1) % mod) * (4 * n - 1) % mod)/6) % mod;
    cout << ans << endl;
}
int main()
{
    ios :: sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    int tc;
    cin >> tc;
    while(tc--)
    {
       solve();
    }
    return 0;
}