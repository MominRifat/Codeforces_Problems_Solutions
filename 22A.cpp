// Created By Momin_Rifat
#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    set<int> s;
    for(int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        s.insert(x);
    }
    if(s.size() == 1)
    {
        cout << "NO" << endl;
    }
    else
    {
        cout << *(++s.begin()) << endl;
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