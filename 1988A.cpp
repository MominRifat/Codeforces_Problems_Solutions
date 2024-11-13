// Created By Momin_Rifat
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n,k;
        cin >> n >> k;
        int ans = ceil(static_cast<double>(n - 1) / (k - 1));
        cout << ans << endl; 
    }
    return 0;
}