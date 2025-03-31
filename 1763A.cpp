// Created By Momin_Rifat
#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    int x = -1;
    int y = 0;
    for(int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        x &= a;
        y |= a;
    }
    cout << y - x << endl;
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