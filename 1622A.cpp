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
        vector<int> a(3);
        for(int i = 0;i < 3; i++)
        {
            cin >> a[i];
        }
        sort(a.begin(),a.end());
        if((a[0] == a[1]) && (a[2] % 2 == 0)) cout << "YES" << endl;
        else if((a[1] == a[2]) && (a[0] % 2 == 0)) cout << "YES" << endl;
        else if((a[0] == a[2]) && (a[1] % 2 == 0)) cout << "YES" << endl;
        else if(a[2] == (a[0] + a[1])) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}

