// Created By Momin_Rifat
#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios :: sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int tc;
    cin >> tc;
    while(tc--)
    {
        int n;
        cin >> n;
        cout << "1";
        for(int i = n; i >= 2; i--)
        {
            cout << " " << i;
        }
        cout << endl;
    }
    return 0;
}