// Created By Momin_Rifat
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin >> tc;
    while(tc--)
    {
        int n, m;
        cin >> n >> m;
        
        string arr1,arr2;
        cin >> arr1 >> arr2;
        int k = 0,index = 0;
        for(int i = 0; i < m; i++)
        {
            if(arr1[index] == arr2[i])
            {
                k++;
                index++;
            }
        }
        cout << k << endl;
    }
    return 0;
}