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
        int l,r;
        cin >> l >> r;
        if(l * 2 > r)
        {
            cout << "-1  -1" << endl;
        }
        else
        {
            cout << l << " " << l * 2 << endl;
        }
    }
    return 0;
}