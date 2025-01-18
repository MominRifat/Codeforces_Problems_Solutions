// Created By Momin_Rifat
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin >> tc;
    while(tc--)
    {
        int m,a,b,c;
        cin >> m >> a >> b >> c;
        int sum = 0;
        if(m < a)
        {
            sum += m;
        }
        else 
        {
            sum += a;
        }
        if(m < b)
        {
            sum += m;
        }
        else 
        {
            sum += b;
        }
        int newm = 2*m - sum;
        if(newm < c)
        {
            sum += newm;
        }
        else
        {
            sum += c;
        }
        cout << sum << endl;
    }
    return 0;
}