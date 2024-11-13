// Created By Momin_Rifat
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin >> tc;
    while(tc--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        string sorted_s = s;
        sort(sorted_s.begin(), sorted_s.end());
        if(s == sorted_s) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}