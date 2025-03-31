// Created By Momin_Rifat
#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n,m;
    cin >> n >> m;
    map<long long int,long long int> a;
    for(int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        a[x]++;
    }
    int count = 0;
    for(int i = 1; i <= m; i++)
    {
        for(int j = i + 1; j <= m; j++)
        {
            count += a[i]*a[j];
        }
    }
    cout << count << endl;
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