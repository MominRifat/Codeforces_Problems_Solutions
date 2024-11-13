// Created By Momin_Rifat
#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int main()
{
    int tc;
    cin >> tc;
    while(tc--)
    {
        vector<int> v(3);
        cin >> v[0] >> v[1] >> v[2];
        if((v[0] + v[1] + v[2])% 2 == 1)
        {
            cout << "-1" << endl;
            continue;
        }
        cout <<  (v[0] + v[1] + v[2] - max(0, v[2] - v[0] - v[1])) / 2 << endl;
    }
    return 0;
}