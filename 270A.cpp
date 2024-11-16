// Created By Momin_Rifat
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin >> tc;
    while(tc--)
    {
        int n;
        cin >> n;
        int ans = 180 - n;
        if(360 % ans) cout << "NO" << endl;
        else cout << "YES" << endl;
    }
    return 0;
}