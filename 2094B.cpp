// Created By Momin_Rifat
#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n,m,l,r;
    cin >> n >> m >> l >> r;
    int check = -l;
    int a,b;
    if(m < check)
    {
        a = m;
    }
    else
    {
        a = check;
    }
    b = m - a;
    cout << -a << " " << b << endl;
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