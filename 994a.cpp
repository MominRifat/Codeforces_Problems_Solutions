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
        vector<int> arr1(n);
        vector<int> arr2(n);
        int index = 0;
        int index1 = 0;
        for(int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if(i % 2 == 0)
            {
                arr1[index] = arr[i];
                index++;
            }
            else
            {
                arr2[index1] = arr[i];
                index1++;
            }
        }
        int ans1 = *max_element(arr1.begin(),arr1.begin() + index) + index;
        int ans2 = *max_element(arr2.begin(),arr2.begin() + index1) + index1;
        cout << max(ans1, ans2) << endl;
    }
    return 0;
}