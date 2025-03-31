// Created By Momin_Rifat
#include<bits/stdc++.h>
using namespace std;
void solve()
{
    long long int a,b,c,d;
    cin >> a >> b >> c >> d;
    long long int x = a*d;
    long long int y = b*c;
    if(x == y) cout << "0" << endl;
    else if(y != 0 && x % y == 0 || x != 0 && y % x == 0)
    {
        cout << "1" << endl;
    }
    else
    {
        cout << "2" << endl;
    }
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