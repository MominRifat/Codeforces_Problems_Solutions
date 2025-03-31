// Created By Momin_Rifat
#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    string a,b;
    cin >> a >> b;
    int one1, one2, zero1, zero2;
    one1 = one2 = zero1 = zero2 = 0;
    for(int i = 0; i < n; i++)
    {
        if(i % 2 == 0) 
        {
            if(a[i] == '1') one1++;
        }
        else 
        {
            if(a[i] == '1') one2++;
        }
    }
    for(int i = 0; i < n; i++)
    {
        if(i % 2 == 0) 
        {
            if(b[i] == '0') zero1++;
        }
        else 
        {
            if(b[i] == '0') zero2++;
        }
    }
    if(one1 <= zero2 && one2 <= zero1) cout << "YES" << endl;
    else cout << "NO" << endl;
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