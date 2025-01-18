// Created By Momin_Rifat
#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios :: sync_with_stdio(false);
    cin.tie(0);
    string s;
    cin >> s;
    int len = s.size();
    int ans = 0;
    for(int i = 0; i < len - 2; i++)
    {
        if(s[i] == 'Q')
        {
            for(int j = i + 1; j < len - 1; j++)
            {
                if(s[j] == 'A')
                {
                    for(int k = j + 1; k < len; k++)
                    {
                        if(s[k] == 'Q') ans++;
                    }
                }
            }
        }
    }
    cout << ans << endl;
    return 0;
}