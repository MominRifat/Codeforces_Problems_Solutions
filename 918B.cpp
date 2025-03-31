// Created By Momin_Rifat
#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n,k;
    cin >> n >> k;
    map<string,string>m;
    while(n--)
    {
        string name,ip;
        cin >> name >> ip;
        m[ip] = name;
    }
    while(k--)
    {
        string s1,s2;
        cin >> s1 >> s2;
        s2.pop_back();
        cout << s1 << " " << s2 << ";" << " " << "#" << m[s2] << endl;
    }
}
int main()
{
    ios :: sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    //int tc;
    //cin >> tc;
    //while(tc--)
    //{
       solve();
    //}
    return 0;
}