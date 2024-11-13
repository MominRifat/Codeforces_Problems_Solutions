// Created By Momin_Rifat
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin >> tc;
    while(tc--)
    {
        int n;
        cin >> n;
        if(n < 7 || n == 9)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout<<"Yes"<<endl;
            if(n % 3 == 0) cout<<"1 4 "<<n-5<<endl;
            else cout<<"1 2 "<<n-3<<endl;
        }
    }
    return 0;
}