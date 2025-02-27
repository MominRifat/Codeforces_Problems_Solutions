// Created By Momin_Rifat
#include<bits/stdc++.h>
using namespace std;
void solve()
{
    long long int n;
    cin >> n;
    long long int nPrime = n;
    int count = 0;
    while(nPrime)
    {
        nPrime /= 10;
        count++;
    }
    int m = 1;
    while(m * 10 <= n)
    {
        m *= 10;
    }
    cout << n - m << endl;
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