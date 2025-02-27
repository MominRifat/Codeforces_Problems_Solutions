// Created By Momin_Rifat
#include<bits/stdc++.h>
#define Y cout << "YES" << endl;
#define N cout << "NO" << endl;
using namespace std;
void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    for(int i = 0; i < n - 1; i++)
    {
        if(s[i] > s[i + 1])
        {
            Y
            cout << i + 1 << " " << i + 2 << endl;
            return;
        }
    }
    N
}
int main()
{
    ios :: sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}