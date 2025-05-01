// Created By Momin_Rifat
#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    map<int, int> m;
    map<int, bool> check;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            int x;
            cin >> x;
            m[i + j + 2] = x;
            check[m[i + j + 2]] = true;
        }
    }
    for(int i = 1; i <= 2 * n; i++)
    {
        if(check[i] == false)
        {
            m[1] = i;
            break;
        }
    }

    for(int i = 1; i <= 2 * n; i++)
    {
        cout << m[i] << " ";
    }
    cout << endl;
}
int main()
{
    ios :: sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int tc = 1;
    cin >> tc;
    while(tc--)
    {
       solve();
    }
    return 0;
}