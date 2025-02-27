// Created By Momin_Rifat
#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr.begin(),arr.end());
    int x = arr[0];
    int count = 0;
    for(int y : arr)
    {
        if(y == arr[0]) count++;
        else break;
    }
    cout << n - count << endl;
}
int main()
{
    int tc;
    cin >> tc;
    while(tc--)
    {
        solve();
    }
    return 0;
}