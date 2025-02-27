// Created By Momin_Rifat
#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int x,y;
    cin >> x >> y;
    if(x == 1 && y == 1) cout << "1" << endl;
    else cout << abs(x - y) << endl;
}
int main()
{
    ios :: sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int tc;
    cin >> tc;
    while(tc--)
    {
        solve();
    }
    return 0;
}