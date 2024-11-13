// Created By Momin_Rifat
#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tc;
    cin >> tc;
    while(tc--)
    {
        int n;
        cin >> n;
        vector<int> arr(n);
        int oddSum = 0;
        int evenSum = 0;
        for(int i = 0; i < n; i++) 
        {
            cin >> arr[i];
            if(arr[i] % 2 == 0) evenSum += arr[i];
            else oddSum += arr[i];
        }
        if(evenSum % 2 == 0 && oddSum % 2 == 0) cout << "YES" << endl;
        else if(evenSum % 2 == 1 && oddSum % 2 == 1) cout << "YES" << endl;
        else cout << "NO" << endl;

    }
    return 0;
}