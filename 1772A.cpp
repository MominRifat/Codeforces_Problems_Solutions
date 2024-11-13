// Created By Momin_Rifat
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
void solve()
{
    string s;
    int n;
    cin >> n;
    cin >> s;
    string s1 = "Timru";
    sort(s.begin(), s.end());
    if (s.length() == 5)
    {
        if (s == s1)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}