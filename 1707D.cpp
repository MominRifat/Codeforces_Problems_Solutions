// Created By Momin_Rifat
#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios :: sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n;
    cin >> n;
    string s;
    cin >> s;
    int ans = 0;
    for(int i = 0; i < n - 1; i++)
    {
        if(s[i] == s[i + 1]) 
        {
            ans++;
            if(i +2 < n)
            {
                if((s[i] == 'R' && s[i + 2] == 'G') || (s[i] == 'G' && s[i + 2] == 'R')) 
                {
                    s[i + 1] = 'B';
                }
                else if((s[i] == 'B' && s[i + 2] == 'G') || (s[i] == 'G' && s[i + 2] == 'B')) 
                {
                    s[i + 1] = 'R';
                }
                else if((s[i] == 'R' && s[i + 2] == 'B') || (s[i] == 'B' && s[i + 2] == 'R'))
                {
                    s[i + 1] = 'G';
                }
                else
                {
                    if(s[i] == 'B') s[i + 1] = 'R';
                    if(s[i] == 'R') s[i + 1] = 'G';
                    if(s[i] == 'G') s[i + 1] = 'B';
                }
            }
            else
            {
                if(s[i] == 'R') 
                {
                    s[i + 1] = 'G';
                } 
                else if(s[i] == 'G')
                {
                    s[i + 1] = 'B';
                } 
                else if (s[i] == 'B') 
                {
                    s[i + 1] = 'R';
                }
            }
        }
    }
    cout << ans << endl;
    cout << s << endl;
    return 0;
}