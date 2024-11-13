// Created By Momin_Rifat
#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int main()
{
    int tc;
    cin >> tc;
    while(tc--)
    {
        int n , s, m;
        cin >> n >> s >> m;
        int oldTime = 0;
        int tm = 0;
        while(n--)
        {
            int a , b;
            cin >> a >> b;
            if(a - oldTime >= s)
            {
                tm = 1;
            }
            else
            {
                oldTime = b;
            }
        }
        if(m - oldTime >= s)
        {
                tm = 1;
        }
        if(tm == 1)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}