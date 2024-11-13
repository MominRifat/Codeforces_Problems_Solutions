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
        string arr;
        cin >> arr;
        vector<long long int> arr1;
        for(int i = 0; i < arr.size(); i++)
        {
            if(arr[i] == '1')
            {
                arr1.push_back(1);
            }
            else
            {
                arr1.push_back(0);
                while(arr[i] == '0' && i < n)
                {
                    i++;
                }
                if(arr[i] == '1')
                {
                    arr1.push_back(1);
                }
            }
        }
        int count1 = 0;
        int count0 = 0;
        for(auto x : arr1)
        {
            if(x == 1)
            {
                count1++;
            }
            else
            {
                count0++;
            }
        }
        if(count0 < count1) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}