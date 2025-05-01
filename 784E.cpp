// Created By Momin_Rifat
#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int a,b,c,d;
    cin >> a >> b >> c >> d;
    int result = ((a^b)&(c|d)) ^ ((c&b)|(a^d));
    cout << result << endl;
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