// Created By Momin_Rifat
#include<bits/stdc++.h>
using namespace std;
void solve()
{
    string s;
    cin >> s;
    long long int one = count(s.begin(),s.end(),'1');
    long long int zero = count(s.begin(),s.end(),'0');
    long long int n = s.size();
    long long int ans = 0;
    for(int i = 0; i < s.size(); i++)
    {
        if(s[i] == '0')
        {
            if(one > 0)
            {
                one--;
            }
            else
            {
                ans = (n - i);
                break;
            }
        }
        else
        {
            if(zero > 0)
            {
                zero--;
            }
            else
            {
                ans = (n - i);
                break;
            }
        }
    }
    cout << ans << endl;
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