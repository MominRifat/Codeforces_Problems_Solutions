// Created By Momin_Rifat
#include<bits/stdc++.h>
using namespace std;
/*
Input:
4 3 5
60 45 80 60 -->> Sorting it -->> 45 60 60 80
30 60 75    -->> Sorting it -->> 30 60 75
*/
void solve()
{
    int n,m,k;
    cin >> n >> m >> k;
    vector<int> cl(n);
    vector<int> app(m);
    for(int i = 0; i < n; i++) cin >> cl[i];
    sort(cl.begin(),cl.end());
    for(int i = 0; i < m; i++) cin >> app[i];
    sort(app.begin(),app.end());
    int ans = 0;
    int i = 0; 
    int j = 0;
    while(i < n && j < m)
    {
         if(abs(cl[i] - app[j]) <= k)
         {
            i++;
            j++;
            ans++;
         }
         else
         {
            if(cl[i] - app[j] > k)
            {
                j++;
            }
            else
            {
                i++;
            }
         }
    }
    cout << ans << endl;
}
int main()
{
    ios :: sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int tc = 1;
    //cin >> tc;
    while(tc--)
    {
       solve();
    }
    return 0;
}