// Created By Momin_Rifat
#include<bits/stdc++.h>
using namespace std;
void solve()
{
    string s;
    cin >> s;
    int flag = 1;
    for(int i = 1; i < s.size(); i++)
    {
        if(s[i] == s[i - 1])
        {
            cout << "1" << endl;
            return;
        }
    }
    cout << s.size() << endl;
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