// Created By Momin_Rifat
#include<iostream>
using namespace std;
void solve()
{
    long long int n,k,x;
    cin >> n >> k >> x;
    long long int mn = k * (k + 1) / 2;
    long long int diff = n - k;
    long long int mx = n * (n + 1) / 2 - diff * (diff + 1) / 2;
    if(x < mn || x > mx)
    {
        cout << "NO" << endl;
    }
    else
    {
        cout << "YES" << endl;
    }
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        solve();
    }
    return 0;
}