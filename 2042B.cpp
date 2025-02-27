// Created By Momin_Rifat
#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    vector<int> a1(n + 1,0);
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
        a1[a[i]]++;
    }
    int count1 = 0;
    int countMul = 0;
    // for(int x : a1)
    // {
    //     cout << x << " " ;
    // }
    // cout << endl;
    for(int i = 0; i < n + 1; i++)
    {
        if(a1[i] == 1)
        {
            count1++;
        }
        else if(a1[i] > 1)
        {
            countMul++;
        }
    }
    //cout << count1 << endl;
    //cout << countMul << endl;
    int ans = (count1 + 1)/2 * 2;
    //cout << ans << endl;
    ans += countMul;
    cout << ans << endl;
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