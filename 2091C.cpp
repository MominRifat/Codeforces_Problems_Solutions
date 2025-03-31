// Created By Momin_Rifat
#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    if(n % 2 == 0)
    {
        cout << "-1" << endl;
        return;
    }
    for(int i = n; i > 0; i--)
    {
        cout << i << " ";
    }
    cout << endl;
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