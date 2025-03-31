// Created By Momin_Rifat
#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    vector<int> arr2(n);
    for(int i = 0; i < n; i++)
    {
        cin >> arr2[i];
    }
    arr[0] = arr2[0];
    for(int i = 1; i < n; i++)
    {
        if(arr[i - 1] - arr2[i] >= 0 && arr2[i] != 0)
        {
            cout << "-1" << endl;
            return;
        }
        else
        {
            arr[i] = arr[i - 1] + arr2[i];
        }
    }
    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
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