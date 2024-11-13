// Created By Momin_Rifat
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin >> tc;
    while(tc--)
    {
        int a,b,c,d;
        cin >> a >> b >> c >> d;
        int ans = 0;
        if(a > d || b < c) ans = 1;
        else if(a == d || b == c) ans = 2;
        else if(a > c)
        {
            if(b > d) ans = d - a + 2;
            else if(b == d) ans = b - a + 1;
            else if(d > b) ans = b - a + 2;
        }
        else if(a == c)
        {
            if(d < b) ans = d - a + 1;
            else if(d == b) ans = b - a;
            else if(d > b) ans = b - a + 1;
        }
        else if(a < c)
        {
            if(d < b) ans = d - c + 2;
            else if(d == b) ans = d - c + 1;
            else if(d > b) ans = b - c + 2;
        }
        cout << ans << endl;
    }
    return 0;
}