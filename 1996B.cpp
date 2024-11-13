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
        char arr[n][n];
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < n; j++)
            {
                cin >> arr[i][j];
            }
        }
        for(int i = 0; i < n; i += k)
        {
            for(int j = 0; j < n; j += k)
            {
                cout << arr[i][j];
            }
            cout << endl;
        }
    }
    return 0; 
}