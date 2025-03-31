// Created By Momin_Rifat
#include<bits/stdc++.h>
using namespace std;
void solve()
{
    string s;
    cin >> s;
    string s2 = s;
    reverse(s.begin(), s.end());
    cout << s + s2 << endl;
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