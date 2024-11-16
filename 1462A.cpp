// Created By Momin_Rifat
#include<bits/stdc++.h>
using namespace std;
int main() 
{
    int tc;
    cin >> tc;
    while (tc--) 
    {
        int n;
        cin >> n;
        vector<int> arr(n);
        for(int i = 0; i < n; i++) 
        {
            cin >> arr[i];
        }
        vector<int> arr2;
        vector<int> arr3;
        int count = 0;
        for(int i = 0; i < n / 2; i++) 
        {
            arr2.push_back(arr[i]);
            count++;
        }
        int i = 0;
        while(count--) 
        {
            arr3.push_back(arr[n - i - 1]);
            i++;
        }

        if(n % 2 == 0) 
        {
            int j = 0;
            for(int i = 0; i < n / 2; i++) 
            {
                cout << arr2[i] << " ";
                cout << arr3[j] << " ";
                j++;
            }
        } 
        else 
        {
            int mid = n / 2;
            int j = 0;
            for(int i = 0; i < mid; i++) 
            {
                cout << arr2[i] << " ";
                if(i < arr3.size()) 
                {
                    cout << arr3[j] << " ";
                    j++;
                }
            }
            cout << arr[mid];
        }
        cout << endl;
    }
    return 0;
}
