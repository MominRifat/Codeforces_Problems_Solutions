// Created By Momin_Rifat
#include<iostream>
using namespace std;
int main()
{
    int tt;
    cin >> tt;
    while(tt--)
    {
        int n,m,k;
        cin >> n >> m >> k;
        for (int i = n; i > m; --i)
        {
            cout << i << ' ';
        }
        for (int i = 1; i <= m; ++i)
        {
            cout << i << ' ';
        }
        cout << endl;
    }
    return 0;
}