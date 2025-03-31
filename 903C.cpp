// Created By Momin_Rifat
#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    map<int,int> m;
    for(int i = 0; i < n; i++)
    {
        cin >> v[i];
        m[v[i]]++;
    }
    int ans = 0;
    for(int i = 0; i < n; i++)
    {
        ans = max(ans,m[v[i]]);
    }
    cout << ans << endl;
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