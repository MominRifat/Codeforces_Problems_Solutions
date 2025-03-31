// Created By Momin_Rifat
#include<bits/stdc++.h>
using namespace std;
void solve()
{
    long long int n;
    cin >> n;
    if(n % 3 == 1)
    {
        cout << "YES" << endl;
    }
    else 
    {
        cout << "NO" << endl;
    }
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