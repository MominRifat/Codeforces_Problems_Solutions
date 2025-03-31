// Created By Momin_Rifat
#include<bits/stdc++.h>
using namespace std;
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
void solve()
{
    int x,y,a;
    cin >> x >> y >> a;
    int dig = a % (x + y);
    if(dig < x) no;
    else yes;
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