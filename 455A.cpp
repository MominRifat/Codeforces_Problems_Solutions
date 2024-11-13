// Created By Momin_Rifat
#include<iostream>
#include<bits/stdc++.h>
long long int dp[100005] = {0};
long long int dp2[100005];
using namespace std;
int main()
{
    long long int n,i,b,m=0;
    cin >> n;

    for(i = 0; i < n; i++)
    {
        cin >> b;
        dp[b]++;
    }

    dp2[0] = 0;
    dp2[1] = dp[1];

    for(i = 2; i <= 100000; i++)
    {
        dp2[i] = max(dp2[i - 1],dp2[i - 2] + i * dp[i]);
    }

    cout << dp2[100000] << endl;

    return 0;
}