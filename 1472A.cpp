// Created By Momin_Rifat
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin >> tc;
    while(tc--)
    {
        int w,h,n;
        cin >> w >> h >> n;
        int ans = 1;
        while(w % 2 == 0)
        {
            ans *= 2;
            w /= 2;
        }
        while(h % 2 == 0)
        {
            ans *= 2;
            h /= 2;
        }
        if(ans >= n) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}