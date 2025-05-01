// Created By Momin_Rifat
#include<bits/stdc++.h>
using namespace std;
void solve()
{
    long long int n;
    cin >> n;
    long long int mid;
    long long int l = -1;
    long long int h = 1e9;
    while(h - l > 1)
    {
        mid = (h + l) / 2;
        if(mid * mid >= n) 
        {
            h = mid;
        }
        else 
        {
            l = mid;
        }
    }
    cout << h - 1 << endl;
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