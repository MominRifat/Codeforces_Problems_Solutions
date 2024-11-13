// Created By Momin_Rifat
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin >> tc;
    while(tc--)
    {
        int n;
        cin >> n;
        vector<int> arr(n);
        long long int sum = 0;
        for(int i = 0; i < n; i++)
        {
            cin >> arr[i];
            sum += arr[i];
        }
        sum /= n;
        long long int tmp;
        bool ok = true;
        for(int i = 0; i < n - 1; i++) {
            if(arr[i] >= sum) 
            {
                tmp = arr[i] - sum;
                arr[i + 1] += tmp;
            }
            else 
            {
                ok = false;
                break;
            }
         }
 
        if(ok) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}