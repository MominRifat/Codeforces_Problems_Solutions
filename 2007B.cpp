// Created By Momin_Rifat
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin >> tc;
    while(tc--)
    {
        int n , m;
        cin >> n >> m;
        vector<int> v(n);
        for(int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        sort(v.begin(),v.end());
        while(m--)
        {
            char c;
            int l,r;
            cin >> c >> l >> r;
            if(v[n - 1] >= l && v[n - 1] <= r)
            {
                if(c == '+')
                {
                        v[n - 1]++;
                }
                else
                {
                    v[n - 1]--;
                }
            }
            cout << v[n - 1] << endl;
        }
    }
    return 0;
}