// Created By Momin_Rifat
#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n,x;
    cin >>  n  >>  x;
    int odd = 0;
    for(int i = 0; i < n; i++)
    {
        int a;
        cin>>a;
        if(a % 2) odd++;
    }
    if(odd >= 1 && !(x == n && odd % 2 == 0) && !(odd == n && x % 2 == 0)) cout << "YES" << endl;
    else cout << "NO" << endl;
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