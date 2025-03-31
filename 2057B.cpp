// Created By Momin_Rifat
#include<bits/stdc++.h>
using namespace std;
vector<pair<int, int>> sortvalue(map<int,int> &m)
{
    vector<pair<int, int>> count;
    for(auto it = m.begin(); it != m.end(); ++it) 
    {
        count.push_back({it->first, it->second});
    }
    sort(count.begin(), count.end(), [&](pair<int, int> a, pair<int, int> b)
    {
        return a.second < b.second;;
    });
    return count;
}
void solve()
{
    int n,k;
    cin >> n >> k;
    map<int,int> m;
    for(int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        m[x]++;
    }
    vector<pair<int, int>> newm = sortvalue(m);
    int len = newm.size();
    for(auto x : newm)
    {
        if(x.second <= k)
        {
            len--;
            k -= x.second;
        }
        else
        {
            break;
        }
    }
    cout << max(len,1) << endl;
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