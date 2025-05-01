// Created By Momin_Rifat
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
void solve()
{
    ll n,d;
    cin >> n >> d;
    vector<ll> a(n);
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a.begin(),a.end());
    ll low = -1;
    ll high = n - 1;
    ll team = 0;
    ll teamsize = 1;
    while(high - low > 1 || low == high - 1)
    {
        if(a[high] * teamsize <= d)
        {
            teamsize++;
            low++;
        }
        else
        {
            high--;
            team++;
            teamsize = 1;
        }
    }
    cout << team << endl;
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