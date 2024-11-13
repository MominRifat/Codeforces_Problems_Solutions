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
        vector<int> v(n);
        int sum = 0;
        for(int i = 0; i < n; i++)
        {
            cin >> v[i];
            if(i % 2 == 0)
            {
                sum += v[i];
            }
            else
            {
                sum -= v[i];
            }
        }
        cout << sum << endl;
    }
    return 0;
}