// Created By Momin_Rifat
#include<bits/stdc++.h>
using namespace std;
void solve()
{
    long long int a,b;
    cin >> a >> b;
    if(a == 0 || b == 0) cout << "0" << endl;
    else
    {
        if(a == b) cout << (a+b)/3 << endl;
        else if(a > b)
        {
            if(b*2 <= a) cout << b << endl;
            else cout << (a+b)/3 << endl;
        }
        else
        {
            if(a*2 <= b) cout << a << endl;
            else cout << (a+b)/3 << endl;
        }
    }
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