// Created By Momin_Rifat
#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    int check = 1;
    int count = 1;
    if(n == 1)
    {
        cout << "1" << endl;
        return;
    }
    else if(n <= 4)
    {
        cout << "2" << endl;
        return;
    }
    while(check < n)
    {
        check = check*2 + 2;
        count++;
    }
    cout << count << endl;
}
int main()
{
    ios :: sync_with_stdio(false);
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