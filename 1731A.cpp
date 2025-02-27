// Created By Momin_Rifat
#include<bits/stdc++.h>
using namespace std;
void solve()
{
    long long int n;
    cin >> n;
    long long int ans = 1;
    for(int i = 1; i <= n; i++)
    {   
        int a;
        cin >> a;
        ans *= a;
    }
    n--;
    cout << (ans + n)*2022 << endl;
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