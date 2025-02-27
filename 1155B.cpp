// Created By Momin_Rifat
#include<bits/stdc++.h>
using namespace std;
#define Y cout << "YES" << endl;
#define N cout << "NO" << endl;
void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int x = n - 11;
    int count = 0;
    for(int i = 0; i < x + 1; i++)
    {
        if(s[i] == '8') count++;
    }
    if(count >= ((x / 2) + 1)) Y
    else N
}
int main()
{
    ios :: sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}