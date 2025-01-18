// Created By Momin_Rifat
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int count = 0;
    for(int a = 1; a <= n; a++)
    {
        for(int b = a; b <= n; b++)
        {
            int csqr = a*a + b*b;
            int root = sqrt(csqr);
            if(root <= n && root*root == csqr) count++;
        }
    }
    cout << count << endl;
    return 0;
}