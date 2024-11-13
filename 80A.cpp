// Created By Momin_Rifat
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin >> n >> m;
    int prime[15] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47};
    int i;
    for (i = 0; i < sizeof(prime); i++)
    {
        if (prime[i] == n)
        {
             break;
        }
    }
    if (prime[i+1] == m)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
 
    return 0;
}