// Created By Momin_Rifat
#include<bits/stdc++.h>
using namespace std;
void solve()
{
    for(int i = 0; i < 9; i++)
    {
        cout << i << endl;
        string s;
        getline(cin,s);
        if(s == "cool" || s == "don't think so" || s == "don't touch me" || s == "not bad" || s == "great!")
        {
            cout << "normal" << endl;
        }
        else if(s == "terrible" || s == "are you serious?" || s == "worse" || s == "go die in a hole" || s == "no way" || s == "don't even")
        {
            cout << "grumpy" << endl;
        }
    }
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