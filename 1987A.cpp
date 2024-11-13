// Created By Momin_Rifat
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin >> tc;

    while(tc--)
    {
        int n,k;
        cin >> n >> k;
        cout << 1 + (n - 1) * k << endl;
    }
    return 0;
}