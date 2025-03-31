// Created By Momin_Rifat
#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    int w,h;
    cin >> w >> h;
    n--;
    int mx = max(w,h);
    while(n--)
    {
        int w,h;
        cin >> w >> h;
        int l = max(w, h);
        int s = min(w, h);
        if(l <= mx)
        {
            mx = l;
        }
        else if (s <= mx)
        {
            mx = s;
        }
        else
        {
            cout << "NO" << endl;
            return;
        }
    }
    cout << "YES" << endl;
}
int main()
{
    ios :: sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int tc = 1;
    //cin >> tc;
    while(tc--)
    {
       solve();
    }
    return 0;
}