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
        int sum = 0;
        int n;
        cin >> n;
        for(int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            sum += x;
        }
        if(sum < n) cout << "1" << endl;
        else cout << sum - n << endl;
    }
    return 0;
}