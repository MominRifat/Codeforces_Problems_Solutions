// Created By Momin_Rifat
#include<bits/stdc++.h>
using namespace std;
void solve()
{
    long long int n,k;
    cin >> n >> k;
    long long int mx = n + n - 1;
    if(mx < k) cout << 0 << endl;
    else
    {
        if(k <= n) cout << (k - 1) / 2 << endl;
        else cout << (n - (k - n) + 1) / 2 << endl;
    }
}
int main()
{
    ios :: sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int tc = 1;
    //cin >> tc;
    while(tc--)
    {
       solve();
    }
    return 0;
}