// Created By Momin_Rifat
#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    if(s[0] == '1' || s[n - 1] == '1') 
    {
        cout << "YES" << endl;
        return;
    }
    else
    {
        for(int i = 0; i < n - 1; i++)
        {
            if(s[i] == '1' && s[i + 1] == '1')
            {
                cout << "YES" << endl;
                return;
            }
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