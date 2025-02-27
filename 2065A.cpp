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
        int len = s.size();
        for(int i = 0; i < len - 2; i++)
        {
            cout << s[i];
        }
        cout << "i" << endl;
    }
    return 0;
}