// Created By Momin_Rifat
#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    stack<char> a;
    for(int i = 0; i < n; i++)
    {
        if(s[i] == '(')
        {
            a.push(s[i]);
        }
        else
        {
            if(!a.empty() && a.top() == '(')
            {
                a.pop();
            }
            else
            {
                a.push(s[i]);
            }
        }
    }
    cout << a.size()/2 << endl;
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