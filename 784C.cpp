// Created By Momin_Rifat
#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i = 0; i < n ; i++)
    {
        cin >> arr[i];
    }
    int mx = *max_element(arr.begin(),arr.end());
    int result = mx ^ arr[n - 1];
    cout << result << endl;
}
int main()
{
    ios :: sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int tc = 1;
    //cin >> tc;
    while(tc--)
    {
       solve();
    }
    return 0;
}