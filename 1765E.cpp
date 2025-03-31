// Created By Momin_Rifat
#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n, a, b;
    cin >> n >> a >> b;
    if(a > b) cout << "1" << endl;
    else if(n % a == 0) cout << n / a << endl;
    else cout << n / a + 1 << endl; 
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