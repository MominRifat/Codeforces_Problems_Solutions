// Created By Momin_Rifat
#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios :: sync_with_stdio(false);
    cin.tie(0);
    int tc;
    cin >> tc;
    while(tc--)
    {
        int n,k;
        cin >> n >> k;
        if(n % 2 == k % 2 && k * k <= n)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}