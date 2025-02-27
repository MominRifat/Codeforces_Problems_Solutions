// Created By Momin_Rifat
#include<bits/stdc++.h>
using namespace std;
void solve()
{
    vector<int> a1(4);
    for(int i = 0; i < 4; i++)
    {   
        cin >> a1[i];
    }
    int a = a1[0] + a1[1];
    int b = a1[2] - a1[1];
    int c = a1[3] - a1[2];
    int a2[3];
    a2[0] = a;
    a2[1] = b;
    a2[2] = c;
    set<int> a3;
    for(int i = 0; i < 3; i++)
    {
        a3.insert(a2[i]);
    }
    cout << 4 - a3.size() << endl;
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