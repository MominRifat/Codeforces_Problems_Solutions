// Created By Momin_Rifat
#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios :: sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int tc;
    cin >> tc;
    while(tc--)
    {
        string s;
        cin >> s;
        set <char> s1;
        int ans = 1;
        for(int i = 0; i < s.size(); i++)
        {
            s1.insert(s[i]);
            if(s1.size() > 3)
            {
                ans++;
                s1.clear();
                s1.insert(s[i]);
            }
        }
        cout << ans << endl;
    }
    return 0;
}