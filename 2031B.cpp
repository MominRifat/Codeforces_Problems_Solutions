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
    for(int i = 1; i < n; i++)
    {
        if(arr[i] - arr[i - 1] == -1)
        {
            swap(arr[i],arr[i- 1]);
        }
    }
    if(is_sorted(arr.begin(),arr.end()))
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}
int main()
{
    ios :: sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int tc;
    cin >> tc;
    while(tc--)
    {
       solve();
    }
    return 0;
}