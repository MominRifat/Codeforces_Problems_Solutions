// Created By Momin_Rifat
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() 
{
    int t;
    cin >> t;
    while(t--) 
    {
        int n, f, k;
        cin >> n >> f >> k;
        vector<int> a(n);
        for(int i = 0; i < n; i++) 
        {
            cin >> a[i];
        }
        
        int fav_value = a[f - 1];
        sort(a.rbegin(), a.rend());
        
        int greater_equal_count = 0;
        for(int i = 0; i < n; i++) 
        {
            if (a[i] >= fav_value) 
            {
                greater_equal_count++;
            }
        }
        if (greater_equal_count <= k) 
        {
            cout << "YES" << endl;
        } 
        else 
        {
            int strictly_greater_count = 0;
            for(int i = 0; i < n; i++) 
            {
                if (a[i] > fav_value) 
                {
                    strictly_greater_count++;
                }
            }

            if(strictly_greater_count >= k) 
            {
                cout << "NO" << endl;
            } 
            else 
            {
                cout << "MAYBE" << endl;
            }
        }
    }
    return 0;
}