// Created By Momin_Rifat
#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>
using namespace std;
int main()
{
    int tc;
    cin >> tc;
    while(tc--)
    {
        vector <int> v(3);
        cin >> v[0] >> v[1] >> v[2];
        sort(v.begin(),v.end());
        if(v[1]%v[0]!=0 || v[2]%v[0]!=0)
        {
            cout << "NO" << '\n';
            continue;
        }
        v[1]/=v[0];
        v[2]/=v[0];
        v[0] = 1;
        if((v[1]==1 && v[2]<=4) || (v[1]==2 && v[2]<=3))
        {
            cout << "YES" << '\n';
        }
        else
        {
            cout << "NO" << '\n';
        }
    }
    return 0;   
    return 0;
}