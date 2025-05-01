// Created By Momin_Rifat
#include<bits/stdc++.h>
using namespace std;
void solve()
{
    string n;
    cin >> n;
    int dlt = 19;
    for(int i = n.size() - 1; i >= 0; i--)
    {
        if(n[i] == '0')
        {
            for(int j = i - 1; j >= 0; j--)
            {
                if(n[j] == '0' || n[j] == '5')
                {
                    int remove = (i - j - 1) + (n.size() - 1 - i);
                    dlt = min(dlt, remove);
                    break;
                }
            }
        }
        else if(n[i] == '5')
        {
            for(int j = i - 1; j >= 0; j--)
            {
                if(n[j] == '2' || n[j] == '7')
                {
                    int remove = (i - j - 1) + (n.size() - 1 - i);
                    dlt = min(dlt, remove);
                    break;
                }
            }
        }
    }
    cout << dlt << endl;
}
int main()
{
    ios ::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int tc;
    cin >> tc;
    while(tc--)
    {
        solve();
    }
    return 0;
}
