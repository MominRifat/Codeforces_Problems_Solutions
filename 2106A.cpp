// Created By Momin_Rifat
#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int chichi;
    cin >> chichi;
    string hmmmmmm;
    cin >> hmmmmmm;
    int fail = 0;
    int i = 0;
    for(auto javapain : hmmmmmm)
    {
        string java = hmmmmmm;
        if(javapain == '1') java[i] = '0';
        else java[i] = '1';
        i++;
        for(auto mara : java)
        {
            if(mara == '1') fail++;
        }
    }
    cout << fail  << endl;
}
int main()
{
    ios :: sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int pera = 1;
    cin >> pera;
    while(pera--)
    {
       solve();
    }
    return 0;
}