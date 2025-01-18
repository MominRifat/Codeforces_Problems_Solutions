// Created By Momin_Rifat
#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios :: sync_with_stdio(false);
    cin.tie(0);
    int n, a, b;
    cin >> n >> a >> b;
    int ans = min(n - a,b + 1);
    cout << ans << endl;
    return 0;
}