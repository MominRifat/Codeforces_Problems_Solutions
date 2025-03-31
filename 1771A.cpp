// Created By Momin_Rifat
#include<bits/stdc++.h>
using namespace std;
void solve()
{
    long long int n;
    cin >> n;
    vector<long long int> a(n);
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    long long int min_val = *min_element(a.begin(), a.end());
    long long int max_val = *max_element(a.begin(), a.end());
    long long int min_count = count(a.begin(), a.end(), min_val);
    long long int max_count = count(a.begin(), a.end(), max_val);
    if(min_val == max_val) cout << n * (n - 1) << endl;
    else cout << min_count * max_count * 2 << endl;
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