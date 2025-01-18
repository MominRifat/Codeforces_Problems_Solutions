// Created By Momin_Rifat
#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios :: sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;
    string s;
    cin >>s;
    int ans = 0;
    int count = 0;
    for(int i = 0; i < s.size(); i++)
    {
        if(s[i] == 'x') count++;
        else
        {
            ans += max(0,count - 2);
            count = 0;
        }
    }
    ans += max(0,count - 2);
    cout << ans << endl;
    return 0;
}