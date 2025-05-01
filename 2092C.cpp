// Created By Momin_Rifat
#include<bits/stdc++.h>
using namespace std;
void solve()
{
    long long int n;
    cin >> n;
    vector<long long int> a(n);
    long long int sum = 0;
    int count = 0;
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
        sum += a[i];
        count += (a[i] & 1);
    }
    if(count == n || count == 0)
    {
        cout << *max_element(a.begin(),a.end()) << endl;
    }
    else
    {
        cout << sum - count + 1 << endl;
    }
}
int main()
{
    ios :: sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int tc = 1;
    cin >> tc;
    while(tc--)
    {
       solve();
    }
    return 0;
}