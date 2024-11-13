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
        int x, y;
        cin >> x >> y;
        int mn = min(x,y);
        if(n % mn == 0)
        {
            cout << n / mn << endl;
        }
        else
        {
            cout << n / mn + 1 << endl;
        }
    }
    return 0;
}