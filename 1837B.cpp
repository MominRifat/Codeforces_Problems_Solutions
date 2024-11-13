// Created By Momin_Rifat
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for(int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int ans = 1, count = 1;
        for(int i = 1; i < n; i++)
        {
            if(s[i] != s[i - 1]) count = 1;
            else count++;
            ans = max(ans, count);
        }
        cout << ans + 1 << endl;
    }    
    return 0;
}