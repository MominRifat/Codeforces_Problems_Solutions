// Created By Momin_Rifat
#include<bits/stdc++.h>
using namespace std;
void solve()
{
    long long int n;
    cin >> n;
    long long int ans = 1;
    while(n >= 4)
    {
        n /= 4;
        ans *= 2;
    }
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