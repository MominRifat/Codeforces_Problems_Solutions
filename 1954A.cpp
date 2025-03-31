// Created By Momin_Rifat
#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n,m,k;
    cin >> n >> m >> k;
    if(n % m == 0)
    {
        n -= (n/m);
        if(n <= k) cout << "NO" << endl;
        else cout << "YES" << endl;
    }
    else
    {
        n -= ((n/m) + 1);
        if(n <= k) cout << "NO" << endl;
        else cout << "YES" << endl;
    }
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