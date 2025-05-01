// Created By Momin_Rifat
#include<bits/stdc++.h>
using namespace std;
void solve()
{
    string s;
    cin >> s;
    for(int i = 0; i < s.size() - 1; i++)
    {
        if(s[i] == 'i' && s[i + 1] == 't')
        {
            cout << "YES" << endl;
            return;
        }
    }
    cout << "NO" << endl;
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