// Created By Momin_Rifat
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin >> tc;
    while(tc--)
    {
        int a,b,c;
        cin >> a >> b >> c;
        if(c % 2 == 0)
        {
            if(a > b) cout << "First" << endl;
            else cout << "Second" << endl;
        }
        else
        {
            if(a < b) cout << "Second" << endl;
            else cout << "First" << endl;
        }
    }
    return 0;
}