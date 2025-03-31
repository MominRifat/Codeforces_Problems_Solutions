// Created By Momin_Rifat
#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int x,n,m;
    cin >> x >> n >> m;
    int y = x;
    m = min(m,30);
    n = min(n,30);
    for(int i = 1; i <= n; i++) x /= 2;
    for(int i = 1; i <= m; i++) x = (x+1)/2;
    for(int i = 1; i <= m; i++) y = (y+1)/2;
    for(int i = 1; i <= n; i++) y /= 2;
    cout << y << " " << x << endl;
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