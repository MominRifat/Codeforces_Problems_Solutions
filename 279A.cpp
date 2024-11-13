// Created By Momin_Rifat
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,t;
    cin >> n >> t;
    vector<int> arr(n);
    for(int i = 0; i < n; i++) cin >> arr[i];
    int count = 0;
    int sum = 0;
    int j = 0;
    for(int i = 0; i < n; i++)
    {
        sum += arr[i];
        if(sum <= t)
        {
            count++;
        }
        else
        {
            sum = sum - arr[j];
            j++;
        }
    }
    cout << count << endl;
    return 0;
}