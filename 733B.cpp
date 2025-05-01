// Created By Momin_Rifat
#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    vector<pair<int,int>> p;
    int l = 0;
    int r = 0;
    for(int i = 0; i < n; i++)
    {
        int x,y;
        cin >> x >> y;
        p.push_back({x, y});
        l += x;
        r += y;
    }
    int ans = abs(l - r);
    int count = 0;
    for(int i = 0; i < n; i++)
    {
        if(abs((l - p[i].first + p[i].second) - (r - p[i].second + p[i].first)) > ans)
        {
            ans = abs((l - p[i].first + p[i].second) - (r - p[i].second + p[i].first));
            count = i + 1;
        }
    }
    cout << count << endl;
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