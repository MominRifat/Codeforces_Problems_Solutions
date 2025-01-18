// Created By Momin_Rifat
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin >> tc;
    while(tc--)
    {
        int a,b,n;
        cin >> a >> b >> n;
        int count = 0;
        while(a <= n && b <= n)
        {
            if(a > b)
            {
                b += a;
                count++;
            }
            else
            {
                a += b;
                count++;
            }
        }
        cout << count << endl;
    }
    return 0;
}