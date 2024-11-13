// Created By Momin_Rifat
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin >> tc;
    while(tc--)
    {
        int l,r;
        cin >> l >> r;
        cout << ((r - l + 1) / 2 + ((r % 2 == 1) && (l % 2 == 1))) / 2 << endl;
    }
    return 0;
}