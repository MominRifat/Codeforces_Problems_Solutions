// Created By Momin_Rifat
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin >> tc;
    while(tc--)
    {
        string s;
        cin >> s;
        for(int  i = s.size() - 1; i >= 0; i--)
        {
            if(s[i] == 'p')
            {
                cout << "q";
            }
            else if(s[i] == 'q')
            {
                cout << "p";
            }
            else
            {
                cout << s[i];
            }
        }
        cout << endl;
    }
    return 0;
}