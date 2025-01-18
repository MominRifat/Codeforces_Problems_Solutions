// Created By Momin_Rifat
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin >> tc;
    while(tc--)
    {
        long long int x, y;
        cin >> x >> y;
        long long int a, b;
        cin >> a >> b;
        long long int count = 0;
        if (x > y) 
        {
            swap(x, y);
        }
        if(b > 2 * a) 
        {
            count = (x + y) * a;
        } 
        else 
        {
            count = x * b + (y - x) * a;
        }
        cout << count << endl;
    }
    return 0;
}
