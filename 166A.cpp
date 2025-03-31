// Created By Momin_Rifat
#include<bits/stdc++.h>
using namespace std;
bool cmp(const pair<int,int> &p1, const pair<int,int> &p2)
{
    if(p1.first > p2.first) return 1;
    else if(p1.first == p2.first) return (p1.second < p2.second);
    return 0;
}
void solve()
{
    int n,k;
    cin >> n >> k;
    vector<pair<int,int>> v(n);
    for(int i = 0; i < n; i++)
    {
        cin >> v[i].first >> v[i].second;
    }
    sort(v.begin(),v.end(),cmp);
    int ans = 0;
    for(auto x : v)
    {
        if(x == v[k - 1])
        {
            ans++;
        }
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