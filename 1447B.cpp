// Created By Momin_Rifat
#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n,m;
    cin >> n >> m;
    int mx = INT_MAX;
    int negcount = 0;
    int sum = 0;
    while(n--)
    {
        vector<int> a(m);
        for(int i = 0; i < m; i++)
        {
            cin >> a[i];
            if(a[i] < 0) negcount++;
            mx = min(mx,abs(a[i]));
            sum += abs(a[i]);
        }
    }
    if(negcount % 2) cout << sum - (2 * mx) << endl;
    else cout << sum << endl;
}
int main()
{
    ios :: sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int tc = 1;
    cin >> tc;
    while(tc--)
    {
       solve();
    }
    return 0;
}