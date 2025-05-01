// Created By Momin_Rifat
#include<bits/stdc++.h>
using namespace std;
void solve()
{
    long long int n,k;
    cin >> n >> k;
    string s;
    cin >> s;
    map<char,long long int> c;
    for(int i = 0; i < k; i++)
    {
        char x;
        cin >> x;
        c[x]++;
    }
    long long int ans = 0;
    long long int sub = 0;
    for(int i = 0; i < n; i++)
    {
        if(c[s[i]])
        {
            sub++;
        }
        else
        {
            ans += ((sub * (sub + 1)) / 2);
            sub = 0;
        }
    }
    ans += ((sub * (sub + 1)) / 2);
    cout << ans << endl;
}
int main()
{
    ios :: sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int tc = 1;
    //cin >> tc;
    while(tc--)
    {
       solve();
    }
    return 0;
}