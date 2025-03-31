// Created By Momin_Rifat
#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n,m;
    cin >> n >> m;
    vector<int> a(n+1);
    vector<int> b(n+1);
    for(int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    set<int> s;
    for(int i = n; i >= 1; i--)
    {
        s.insert(a[i]);
        b[i] = s.size();
    }
    while(m--)
    {
        int x;
        cin >> x;
        cout << b[x] << endl;
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