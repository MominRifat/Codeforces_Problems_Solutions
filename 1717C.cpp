// Created By Momin_Rifat
#include<bits/stdc++.h>
using namespace std;
void solve() 
{
    int n;
    cin >> n;
    vector<pair<int, int>> vp(n + 1);
    for(int i = 0; i < n; i++) 
    {
        cin >> vp[i].first;
    }
    for(int i = 0; i < n; i++) 
    {
        cin >> vp[i].second;
    }
    vp[n].first = vp[0].first;
    vp[n].second = vp[0].second;
    for(int i = 0; i < n; i++) 
    {
        if(vp[i].first > vp[i].second) 
        {
            cout << "NO" << endl;
            return;
        }
    }
    for(int i = 0; i < n; i++) 
    {
        if(vp[i].first != vp[i].second) 
        {
            if(vp[i].second > vp[i + 1].second + 1)
            {
                cout << "NO" << endl;
                return;
            }
        }
    }
    cout << "YES" << endl;
}
int main() 
{
    ios::sync_with_stdio(false);
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