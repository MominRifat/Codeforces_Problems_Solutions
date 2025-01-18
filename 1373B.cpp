// Created By Momin_Rifat
#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios :: sync_with_stdio(false);
    cin.tie(0);
    int tc;
    cin >> tc;
    while(tc--)
    {
        string s;
        cin >> s;
        int one = 0;
        int zero = 0;
        for(int i = 0; i < s.size(); i++)
        {
            if(s[i] == '0') zero++;
            else one++;
        }
        int mn = min(zero,one);
        if(mn % 2 == 0) cout << "NET" << endl;
        else cout << "DA" << endl;
    }
    return 0;
}