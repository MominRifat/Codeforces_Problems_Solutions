// Created By Momin_Rifat
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int one = 0;
    int zero = 0;
    for(int i = 0; i < s.size(); i++)
    {
        if(s[i] == '1')
        {
            one++;
        }
        else
        {
            zero++;
        }
    }
    cout << abs(zero - one) << endl;
    return 0;
}