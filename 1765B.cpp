// Created By Momin_Rifat
#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int flag = 1;
    for(int i = 1; i < n; i++)
    {
        if(s[i] == s[i + 1])
        {
            i += 2;
        }
        else 
        {
            flag = 0;
            break;
        }
    }
    if(flag == 1) cout << "YES" << endl;
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