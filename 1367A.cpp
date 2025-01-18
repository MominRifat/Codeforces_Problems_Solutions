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
        string n = s.substr(0,2);
        int i = 2;
        while(s[i] != '\0')
        {
            if(i == s.size() - 1)
            {
                n += s[i];
                break;
            }
            if(s[i] == s[i+1])
            {
                n += s[i];
                i++;
            }
            i++;
        }
        cout << n << endl;
    }
    return 0;
}