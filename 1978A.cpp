// Created By Momin_Rifat
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin >> tc;
    while(tc--)
    {
        int n;
        cin >> n;
        vector<int> arr(n);
        for(int i = 0; i < n; i++) cin >> arr[i];
        int mx = *max_element(arr.begin(),arr.end() - 1);
        cout << mx + arr[n - 1] << endl;
    }
    return 0;
}