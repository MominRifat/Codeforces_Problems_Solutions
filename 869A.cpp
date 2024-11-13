// Created By Momin_Rifat
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++) cin >> v[i];
    int mx = *max_element(v.begin(),v.end());
    if(mx - 25 < 0) cout << "0" << endl;
    else cout << mx - 25 << endl;
    return 0;
}