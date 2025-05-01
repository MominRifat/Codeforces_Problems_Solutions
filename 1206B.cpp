// Created By Momin_Rifat
#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n,x;
    cin >> n >> x;
    for(int i = 0; i < n; i++)
    {
        if(i != x) cout << i << " ";
    }
    if(n > x) cout << x;
    cout << endl;
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