// Created By Momin_Rifat
#include<bits/stdc++.h>
using namespace std;
void solve()
{
    set<int> a;
    for(int i = 0; i < 4; i++)
    {
        int x;
        cin >> x;
        a.insert(x);
    }
    if(a.size() == 1) cout << "YES" << endl;
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