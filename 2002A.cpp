// Created By Momin_Rifat
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin >> tc;
    while(tc--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        cout << min(a,c)*min(b,c) << endl;
    }
    return 0;
}