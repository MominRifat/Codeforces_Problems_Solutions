// Created By Momin_Rifat
#include<iostream>
#include<vector>
#include<set>
using namespace std;
int main()
{   int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for(int i = 0; i < n; ++i)
        {
            cin >> a[i];
        }
        set<int> oc;
        oc.insert(a[0]);
        bool ans = true;

        for(int i = 1; i < n; ++i)
        {
            if(oc.count(a[i] - 1) == 0 && oc.count(a[i] + 1) == 0) 
            {
                ans = false;
                break;
            }
            oc.insert(a[i]);
        }
        if(ans)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}