// Created By Momin_Rifat
#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    map<string,bool>v;
    for(int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        if(v[s] == 1)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
        v[s] = 1;
    }
}
int main()
{
    ios :: sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    //int tc;
    //cin >> tc;
    //while(tc--)
    //{
       solve();
    //}
    return 0;
}