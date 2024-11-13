// Created By Momin_Rifat
#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v(2);
    cin >> v[0] >> v[1];
    if(find(v.begin(), v.end(), 1) == v.end())
    {
        cout << "1" << endl;
    }
    else if(find(v.begin(), v.end(), 2) == v.end())
    {
        cout << "2" << endl;
    }
    else
    {
        cout << "3" << endl;
    }
    return 0;
}