// Created By Momin_Rifat
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int count = 0;
    int j = 2;
    int k = 3;
    for(int i = 1; i <= (n-2); i++)
    {
        count += (j * k);
        int temp = j;
        j = k;
        k++;
    }
    cout << count  << endl;
    return 0;
}