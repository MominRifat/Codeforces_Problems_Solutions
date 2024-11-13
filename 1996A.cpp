// Created By Momin_Rifat
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin >> tc;
    while(tc--)
    {
        int legs;
        cin >> legs;
        int count = legs / 4;
        if(legs % 4 != 0)
        {
            legs = legs % 4;
            count = count + legs / 2;
            cout << count << endl;
        }
        else
        {
            cout << count << endl;
        }
    }
    return 0;
}